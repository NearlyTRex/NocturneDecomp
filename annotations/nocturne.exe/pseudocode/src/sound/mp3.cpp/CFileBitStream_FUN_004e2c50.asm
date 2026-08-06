; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CFileBitStream_FUN_004e2c50(CFileBitStream *this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e2c50
        ;   Label: sound_mp3.cpp_CFileBitStream_FUN_004e2c50
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004e2c54
    RET                                 ; 004e2c57

