// FILE: Pixel.h
// Authors: Theresa Wilson and Barb Wahl
// Modified 2-7-2018
//
// CLASS PROVIDED: Pixel, part of the namespace `imagelab`
//
// CONSTRUCTOR for the Pixel class:
//
//   Pixel( int r=0, int g=0, int b=0 )
//     Sets the RGB values for a new pixel. The default constructor will
//       create a black pixel (RGB values all set to 0).
//     Preconditions: 0 <= r <= 255; 0 <= g <= 255; 0 <= b <= 255
//     Postconditions:
//       -The pixel's red value is set to the value of r.
//       -The pixel's green value is set to the value of g.
//       -The pixel's blue value is set to the value of b.
//
//
// MODIFICATION MEMBER FUNCTIONS for the Pixel class:
//
//   void set( int r, int g, int b )
//     Sets the RGB values for the pixel.
//     Preconditions: 0 <= r <= 255; 0 <= g <= 255; 0 <= b <= 255
//     Postconditions:
//       -The pixel's red value is set to the value of r.
//       -The pixel's green value is set to the value of g.
//       -The pixel's blue value is set to the value of b.
//
//   void setRed( int r )
//     Sets the red value for the pixel.
//     Precondition: 0 <= r <= 255
//     Postconditions: The pixel's red value is set to the value of r.
//
//   void setGreen( int g )
//     Sets the green value for the pixel.
//     Precondition: 0 <= g <= 255
//     Postconditions: The pixel's green value is set to the value of g.
//
//   void setBlue( int b )
//     Sets the blue value for the pixel.
//     Precondition: 0 <= b <= 255
//     Postconditions: The pixel's blue value is set to the value of b.
//
//
// ACCESSOR MEMBER FUNCTIONS for the Pixel class:
//
//   int getRed( ) const
//     Postcondition: The return value is the red value for the pixel.
//
//   int getGreen( ) const
//     Postcondition: The return value is the green value for the pixel.
//
//   int getBlue( ) const
//     Postcondition: The return value is the blue value for the pixel.
//
//
// VALUE SEMANTICS for the Pixel class:
//   Assignments and the copy constructor may be used with Pixel objects.
//
//
// FRIEND FUNCTIONS (may access private data directly)
//   friend std::ostream& operator<< (std::ostream& out, const Pixel& pix);
//   friend std::istream& operator>> (std::istream& in, Pixel& pix);
//
//
// OPERATOR OVERLOADING for the Pixel class:
//
//   bool operator== (const Pixel& pix1, const Pixel& pix2)
//     Equivalence operator for pixels.
//     Two pixels are equivalent if the pixels have the same red
//       values, the same green values, and the same blue values.
//
//   bool operator!= (const Pixel& pix1, const Pixel& pix2)
//     Inequivalence operator for pixels.
//
//   std::ostream& operator<< (std::ostream& out, const Pixel& pix)
//     Stream output operator (<<) for outputting the contents of a pixel.
//     Example: A pixel with red value 100, green value 150, and blue value 200
//              will produce the following output:100 150 200
//     Note: Returns the `out` parameter to allow chaining of stream output.
//
//   std::istream& operator>> (std::istream& in, Pixel& pix)
//     Stream input operator (>>) for reading a pixel from an input stream.
//     Precondition: `in` holds a string of three integers separated by spaces;
//        each integer must be in the range 0 to 255, inclusive.
//     Postconditions:
//        -The red value of pix is set to the first integer.
//        -The green value of pix is set to the second integer.
//        -The blue value of pix is set to the third integer.
//

#ifndef PIXEL_H
#define PIXEL_H

namespace imagelab
{
class Pixel
{
   public:
    // CONSTRUTOR
    Pixel( int r=0, int g=0, int b=0 )
    { rval = r; gval = g; bval = b; }

    // MODIFICATION MEMBER FUNCTIONS
    void set( int r, int g, int b )
    { rval = r; gval = g; bval = b; }

    void setRed( int r )
    { rval = r; }

    void setGreen( int g )
    { gval = g; }

    void setBlue( int b )
    { bval = b; }

    // ACCESSOR MEMBER FUNCTIONS
    int getRed( ) const
    { return rval; }

    int getGreen( ) const
    { return gval; }

    int getBlue( ) const
    { return bval; }

    // FRIEND FUNCTIONS
    friend std::ostream& operator<< (std::ostream& out, const Pixel& pix);
    friend std::istream& operator>> (std::istream& in, Pixel& pix);

   private:
    // INSTANCE VARIABLES
    int rval;   // red level for RGB color model, 0 <= rval <=255
    int gval;   // green level for RGB color model, 0 <= rval <=255
    int bval;   // blue level for RGB color model, 0 <= rval <=255

}; // end Pixel class definition

// OPERATOR OVERLOADING
bool operator== (const Pixel& pix1, const Pixel& pix2);
bool operator!= (const Pixel& pix1, const Pixel& pix2);
std::ostream& operator<< (std::ostream& out, const Pixel& pix);
std::istream& operator>> (std::istream& in, Pixel& pix);

} // namespace

#endif
