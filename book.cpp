//
// Created by shangke on 2023/11/22.
//

#include "book.h"

Book::Book() {}

const char *Book::getBookName() const {
    return BookName;
}

int Book::getBookNum() const {
    return BookNum;
}

void Book::setBookNum(int bookNum) {
    BookNum = bookNum;
}

const char *Book::getWriterName() const {
    return WriterName;
}

int Book::getBookMethods() const {
    return BookMethods;
}

void Book::setBookMethods(int bookMethods) {
    BookMethods = bookMethods;
}

const char *Book::getPressName() const {
    return PressName;
}

int Book::getPublicationTime() const {
    return PublicationTime;
}

void Book::setPublicationTime(int publicationTime) {
    PublicationTime = publicationTime;
}

float Book::getPrice() const {
    return Price;
}

void Book::setPrice(float price) {
    Price = price;
}




