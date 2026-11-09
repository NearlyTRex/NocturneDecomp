; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_00483950(CPickList *this_ptr,int mouse_x,int mouse_y)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mouse_x
; int              Stack[0xc]:4   mouse_y
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00482770 at 004828cf
;
; Referenced Globals:
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483950
        ;   Label: shape_edittool.cpp_FUN_00483950
    PUSH ESI                            ; 00483951
    PUSH EDI                            ; 00483952
    PUSH EBP                            ; 00483953
    MOV ECX,dword ptr [ESP + 0x14]      ; 00483954
    MOV EBX,dword ptr [ESP + 0x18]      ; 00483958
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048395c
    MOV ESI,dword ptr [0x01c35e48]      ; 00483960 | DAT_01c35e48
    MOV EDI,dword ptr [0x01c35e4c]      ; 00483966 | DAT_01c35e4c
    SUB EBX,ESI                         ; 0048396c
    SUB EDX,EDI                         ; 0048396e
    TEST EBX,EBX                        ; 00483970
    JL 0x004839c1                       ; 00483972
        ;   XREF to: 004839c1 (CONDITIONAL_JUMP)  ; LAB_004839c1
    TEST EDX,EDX                        ; 00483974
    JL 0x004839c1                       ; 00483976
        ;   XREF to: 004839c1 (CONDITIONAL_JUMP)  ; LAB_004839c1
    MOV EAX,EDX                         ; 00483978
    MOV EBP,dword ptr [ECX + 0x18c]     ; 0048397a
    SAR EDX,0x1f                        ; 00483980
    IDIV EBP                            ; 00483983
    MOV ESI,EAX                         ; 00483985
    MOV EDX,EBX                         ; 00483987
    MOV EAX,EBX                         ; 00483989
    SAR EDX,0x1f                        ; 0048398b
    IDIV dword ptr [ECX + 0x1a4]        ; 0048398e
    TEST ESI,ESI                        ; 00483994
    JL 0x004839c1                       ; 00483996
        ;   XREF to: 004839c1 (CONDITIONAL_JUMP)  ; LAB_004839c1
    MOV EDI,dword ptr [ECX + 0x1a0]     ; 00483998
    CMP ESI,EDI                         ; 0048399e
    JGE 0x004839c1                      ; 004839a0
        ;   XREF to: 004839c1 (CONDITIONAL_JUMP)  ; LAB_004839c1
    TEST EAX,EAX                        ; 004839a2
    JL 0x004839c1                       ; 004839a4
        ;   XREF to: 004839c1 (CONDITIONAL_JUMP)  ; LAB_004839c1
    CMP EAX,dword ptr [ECX + 0x1a8]     ; 004839a6
    JGE 0x004839c1                      ; 004839ac
        ;   XREF to: 004839c1 (CONDITIONAL_JUMP)  ; LAB_004839c1
    IMUL EAX,EDI                        ; 004839ae
    ADD EAX,dword ptr [ECX + 0x198]     ; 004839b1
    ADD EAX,ESI                         ; 004839b7
    TEST EAX,EAX                        ; 004839b9
    JL 0x004839c1                       ; 004839bb
        ;   XREF to: 004839c1 (CONDITIONAL_JUMP)  ; LAB_004839c1
    CMP EAX,dword ptr [ECX]             ; 004839bd
    JL 0x004839c6                       ; 004839bf
        ;   XREF to: 004839c6 (CONDITIONAL_JUMP)  ; LAB_004839c6
    MOV EAX,0xffffffff                  ; 004839c1
        ;   Label: LAB_004839c1
    POP EBP                             ; 004839c6
        ;   Label: LAB_004839c6
    POP EDI                             ; 004839c7
    POP ESI                             ; 004839c8
    POP EBX                             ; 004839c9
    RET                                 ; 004839ca

