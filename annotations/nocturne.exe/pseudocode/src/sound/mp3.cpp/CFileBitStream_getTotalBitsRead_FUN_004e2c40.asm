; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CFileBitStream_getTotalBitsRead_FUN_004e2c40(CFileBitStream *this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e2c40
        ;   Label: sound_mp3.cpp_CFileBitStream_getTotalBitsRead_FUN_004e2c40
    MOV EAX,dword ptr [EAX + 0xc]       ; 004e2c44
    RET                                 ; 004e2c47

