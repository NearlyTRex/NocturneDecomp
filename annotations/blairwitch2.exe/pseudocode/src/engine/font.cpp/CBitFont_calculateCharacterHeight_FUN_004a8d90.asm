; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004a8d90(CBitFont *this_ptr,uchar *char_bitmap,int char_width,int char_height,int bitmap_stride)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   char_bitmap
; int              Stack[0xc]:4   char_width
; int              Stack[0x10]:4   char_height
; int              Stack[0x14]:4   bitmap_stride
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_font.cpp_FUN_004a88e0 at 004a8c6d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8d90
        ;   Label: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004a8d90
    PUSH ESI                            ; 004a8d91
    PUSH EDI                            ; 004a8d92
    PUSH EBP                            ; 004a8d93
    SUB ESP,0x4                         ; 004a8d94
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a8d97
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a8d9b
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a8d9f
    MOV ECX,dword ptr [ESP + 0x24]      ; 004a8da3
    XOR EDX,EDX                         ; 004a8da7
    XOR EDI,EDI                         ; 004a8da9
    MOV dword ptr [ESP],EDX             ; 004a8dab
    TEST ECX,ECX                        ; 004a8dae
    JLE 0x004a8ddb                      ; 004a8db0
        ;   XREF to: 004a8ddb (CONDITIONAL_JUMP)  ; LAB_004a8ddb
    MOV EDX,EBP                         ; 004a8db2
        ;   Label: LAB_004a8db2
    XOR EAX,EAX                         ; 004a8db4
    TEST EBX,EBX                        ; 004a8db6
    JLE 0x004a8dcc                      ; 004a8db8
        ;   XREF to: 004a8dcc (CONDITIONAL_JUMP)  ; LAB_004a8dcc
    XOR ECX,ECX                         ; 004a8dba
        ;   Label: LAB_004a8dba
    MOV CL,byte ptr [EDX]               ; 004a8dbc
    CMP ECX,dword ptr [ESI + 0x4208]    ; 004a8dbe
    JNZ 0x004a8de6                      ; 004a8dc4
        ;   XREF to: 004a8de6 (CONDITIONAL_JUMP)  ; LAB_004a8de6
    INC EAX                             ; 004a8dc6
    INC EDX                             ; 004a8dc7
    CMP EAX,EBX                         ; 004a8dc8
    JL 0x004a8dba                       ; 004a8dca
        ;   XREF to: 004a8dba (CONDITIONAL_JUMP)  ; LAB_004a8dba
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a8dcc
        ;   Label: LAB_004a8dcc
    MOV EDX,dword ptr [ESP + 0x24]      ; 004a8dd0
    INC EDI                             ; 004a8dd4
    ADD EBP,EAX                         ; 004a8dd5
    CMP EDI,EDX                         ; 004a8dd7
    JL 0x004a8db2                       ; 004a8dd9
        ;   XREF to: 004a8db2 (CONDITIONAL_JUMP)  ; LAB_004a8db2
    MOV EAX,dword ptr [ESP]             ; 004a8ddb
        ;   Label: LAB_004a8ddb
    ADD ESP,0x4                         ; 004a8dde
    POP EBP                             ; 004a8de1
    POP EDI                             ; 004a8de2
    POP ESI                             ; 004a8de3
    POP EBX                             ; 004a8de4
    RET                                 ; 004a8de5
    LEA EAX,[EDI + 0x1]                 ; 004a8de6
        ;   Label: LAB_004a8de6
    MOV dword ptr [ESP],EAX             ; 004a8de9
    JMP 0x004a8dcc                      ; 004a8dec
        ;   XREF to: 004a8dcc (UNCONDITIONAL_JUMP)  ; LAB_004a8dcc

