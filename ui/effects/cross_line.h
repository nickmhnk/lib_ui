// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#pragma once

#include "styles/style_widgets.h"

class Painter;

namespace Ui {

class CrossLineAnimation {
public:
	CrossLineAnimation(
		const style::CrossLineAnimation &st,
		float angle = 315);

	void paint(Painter &p, QPoint position, float64 progress);
	void paint(Painter &p, int left, int top, float64 progress);

private:
	QImage image(float64 progress) const;

	const style::CrossLineAnimation &_st;
	const QPen _transparentPen;
	const QPen _strokePen;
	QLineF _line;
	const QImage _completeCross;

};

} // namespace Ui