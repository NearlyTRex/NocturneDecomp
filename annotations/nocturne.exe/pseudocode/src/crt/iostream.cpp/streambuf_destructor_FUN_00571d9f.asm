; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_iostream_cpp_streambuf_destructor_FUN_00571d9f(int param_1)
;
;
; XREF[2]:
;   crt_fstream.cpp_filebuf_dtor_FUN_00570449 at 00570487
;   crt_strstream.cpp_strstreambuf_dtor_FUN_005701cf at 00570208
;
; Referenced Globals:
;   undefined1* g_StreambufVTable = 0056ff82
;
; Called Functions:
;   FUN_00571ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571d9f
        ;   Label: crt_iostream.cpp_streambuf_destructor_FUN_00571d9f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00571da0
    MOV AH,byte ptr [EBX + 0x24]        ; 00571da4
    MOV dword ptr [EBX + 0x28],0x5a4ab0 ; 00571da7 | g_StreambufVTable
    TEST AH,0x2                         ; 00571dae
    JNZ 0x00571db7                      ; 00571db1
        ;   XREF to: 00571db7 (CONDITIONAL_JUMP)  ; LAB_00571db7
    MOV EAX,EBX                         ; 00571db3
    POP EBX                             ; 00571db5
    RET                                 ; 00571db6
    MOV EDX,dword ptr [EBX + 0x4]       ; 00571db7
        ;   Label: LAB_00571db7
    PUSH EDX                            ; 00571dba
    CALL FUN_00571ef0                   ; 00571dbb
        ;   XREF to: 00571ef0 (UNCONDITIONAL_CALL)  ; void FUN_00571ef0(void * buffer)
    ADD ESP,0x4                         ; 00571dc0
    MOV EAX,EBX                         ; 00571dc3
    POP EBX                             ; 00571dc5
    RET                                 ; 00571dc6

