/*
 * sobel.hpp - Implements the sobel algorithm
 *
 *  Created on: 28 may. 2019
 *      Author: David Baselga
 */

#ifndef INCLUDE_SOBEL_HPP_
#define INCLUDE_SOBEL_HPP_

#include <opencv2/opencv.hpp>


/**
 * function sobel(A : as two dimensional image array)
	Gx=[-1 0 1; -2 0 2; -1 0 1]
	Gy=[-1 -2 -1; 0 0 0; 1 2 1]

	rows = size(A,1)
	columns = size(A,2)
	mag=zeros(A)

	for i=1:rows-2
		for j=1:columns-2
			S1=sum(sum(Gx.*A(i:i+2,j:j+2)))
			S2=sum(sum(Gy.*A(i:i+2,j:j+2)))

			mag(i+1,j+1)=sqrt(S1.^2+S2.^2)
		end for
	end for

	threshold = 70 %varies for application [0 255]
	output_image = max(mag,threshold)
	output_image(output_image==round(threshold))=0;
	return output_image
end function
 */

int sobel()


#endif /* INCLUDE_SOBEL_HPP_ */
