; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_readByteWithCount_FUN_0043e4c0(_FILE *file,int *remaining_count)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
; int *            Stack[0x8]:4   remaining_count
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Called Functions:
;   crt_iostream.cpp_istream_get_FUN_005ff245
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e4c0
        ;   Label: support_codec.cpp_readByteWithCount_FUN_0043e4c0
    PUSH ESI                            ; 0043e4c1
    PUSH EDI                            ; 0043e4c2
    PUSH EBP                            ; 0043e4c3
    SUB ESP,0x4                         ; 0043e4c4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0043e4c7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043e4cb
    CMP dword ptr [EBX],0x1             ; 0043e4cf
    JGE 0x0043e4e1                      ; 0043e4d2
        ;   XREF to: 0043e4e1 (CONDITIONAL_JUMP)  ; LAB_0043e4e1
    MOV EAX,0xffffffff                  ; 0043e4d4
        ;   Label: LAB_0043e4d4
    ADD ESP,0x4                         ; 0043e4d9
    POP EBP                             ; 0043e4dc
    POP EDI                             ; 0043e4dd
    POP ESI                             ; 0043e4de
    POP EBX                             ; 0043e4df
    RET                                 ; 0043e4e0
    MOV EAX,ESP                         ; 0043e4e1
        ;   Label: LAB_0043e4e1
    PUSH EAX                            ; 0043e4e3
    PUSH ESI                            ; 0043e4e4
    CALL crt_iostream.cpp_istream_get_FUN_005ff245 ; 0043e4e5
        ;   XREF to: 005ff245 (UNCONDITIONAL_CALL)  ; istream * crt_iostream.cpp_istream_get_FUN_005ff245(istream * this_ptr, char * c)
    MOV EAX,dword ptr [ESI]             ; 0043e4ea
    ADD ESI,dword ptr [EAX + 0x4]       ; 0043e4ec
    MOV EDI,dword ptr [ESI + 0x10]      ; 0043e4ef
    ADD ESP,0x8                         ; 0043e4f2
    TEST EDI,EDI                        ; 0043e4f5
    JNZ 0x0043e4d4                      ; 0043e4f7
        ;   XREF to: 0043e4d4 (CONDITIONAL_JUMP)  ; LAB_0043e4d4
    MOV EBP,dword ptr [EBX]             ; 0043e4f9
    DEC EBP                             ; 0043e4fb
    XOR EAX,EAX                         ; 0043e4fc
    MOV dword ptr [EBX],EBP             ; 0043e4fe
    MOV AL,byte ptr [ESP]               ; 0043e500
    ADD ESP,0x4                         ; 0043e503
    POP EBP                             ; 0043e506
    POP EDI                             ; 0043e507
    POP ESI                             ; 0043e508
    POP EBX                             ; 0043e509
    RET                                 ; 0043e50a

