#import "LanSongFilter.h"

@interface LanSongPixellatePositionFilter : LanSongFilter
{
    GLint fractionalWidthOfAPixelUniform;  //gl中的masaic的每个马克点的大小.
    
    GLint aspectRatioUniform;//?????  //gl的纹理宽高比?????
    
    GLint centerUniform;  //gl中masaic的中心点
    GLint radiusUniform;  //gl mosaic的半径坐标
}

// The fractional width of the image to use as a size for the pixels in the resulting image. Values below one pixel width in the source image are ignored.
@property(readwrite, nonatomic) CGFloat fractionalWidthOfAPixel;

// the center point to start pixelation in texture coordinates, default 0.5, 0.5
@property(readwrite, nonatomic) CGPoint center;

// the radius (0.0 - 1.0) in which to pixelate, default 1.0
@property(readwrite, nonatomic) CGFloat radius;

@end