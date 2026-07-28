; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_CCodec_process_FUN_00438f90(undefined4 param_1,_istream *param_2,int *param_3,_ostream *param_4)
;
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Called Functions:
;   crt_iostream.cpp_istream_get_FUN_00564c53
;   crt_iostream.cpp_ostream_put_FUN_00564ce5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438f90
        ;   Label: support_codec.cpp_CCodec_process_FUN_00438f90
    PUSH ESI                            ; 00438f91
    PUSH EDI                            ; 00438f92
    PUSH EBP                            ; 00438f93
    SUB ESP,0x4                         ; 00438f94
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00438f97
    MOV EDI,dword ptr [ESP + 0x20]      ; 00438f9b
    MOV EBP,dword ptr [ESP + 0x24]      ; 00438f9f
    MOV EDX,dword ptr [EDI]             ; 00438fa3
        ;   Label: LAB_00438fa3
    MOV EBX,EDI                         ; 00438fa5
    CMP EDX,0x1                         ; 00438fa7
    JGE 0x00438fc4                      ; 00438faa
        ;   XREF to: 00438fc4 (CONDITIONAL_JUMP)  ; LAB_00438fc4
    MOV EAX,0xffffffff                  ; 00438fac
        ;   Label: LAB_00438fac
    MOV EBX,EAX                         ; 00438fb1
        ;   Label: LAB_00438fb1
    TEST EAX,EAX                        ; 00438fb3
    JGE 0x00438fe6                      ; 00438fb5
        ;   XREF to: 00438fe6 (CONDITIONAL_JUMP)  ; LAB_00438fe6
    MOV EAX,0x1                         ; 00438fb7
    ADD ESP,0x4                         ; 00438fbc
    POP EBP                             ; 00438fbf
    POP EDI                             ; 00438fc0
    POP ESI                             ; 00438fc1
    POP EBX                             ; 00438fc2
    RET                                 ; 00438fc3
    MOV EAX,ESP                         ; 00438fc4
        ;   Label: LAB_00438fc4
    PUSH EAX                            ; 00438fc6
    PUSH ESI                            ; 00438fc7
    CALL crt_iostream.cpp_istream_get_FUN_00564c53 ; 00438fc8
        ;   XREF to: 00564c53 (UNCONDITIONAL_CALL)  ; _istream * crt_iostream.cpp_istream_get_FUN_00564c53(_istream * this_ptr, char * c)
    MOV EAX,dword ptr [ESI]             ; 00438fcd
    MOV EAX,dword ptr [EAX + 0x4]       ; 00438fcf
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x10] ; 00438fd2
    ADD ESP,0x8                         ; 00438fd6
    TEST ECX,ECX                        ; 00438fd9
    JNZ 0x00438fac                      ; 00438fdb
        ;   XREF to: 00438fac (CONDITIONAL_JUMP)  ; LAB_00438fac
    DEC dword ptr [EDI]                 ; 00438fdd
    XOR EAX,EAX                         ; 00438fdf
    MOV AL,byte ptr [ESP]               ; 00438fe1
    JMP 0x00438fb1                      ; 00438fe4
        ;   XREF to: 00438fb1 (UNCONDITIONAL_JUMP)  ; LAB_00438fb1
    XOR EAX,EAX                         ; 00438fe6
        ;   Label: LAB_00438fe6
    MOV AL,BL                           ; 00438fe8
    PUSH EAX                            ; 00438fea
    PUSH EBP                            ; 00438feb
    CALL crt_iostream.cpp_ostream_put_FUN_00564ce5 ; 00438fec
        ;   XREF to: 00564ce5 (UNCONDITIONAL_CALL)  ; _ostream * crt_iostream.cpp_ostream_put_FUN_00564ce5(_ostream * this_ptr, int character)
    ADD ESP,0x8                         ; 00438ff1
    JMP 0x00438fa3                      ; 00438ff4
        ;   XREF to: 00438fa3 (UNCONDITIONAL_JUMP)  ; LAB_00438fa3

