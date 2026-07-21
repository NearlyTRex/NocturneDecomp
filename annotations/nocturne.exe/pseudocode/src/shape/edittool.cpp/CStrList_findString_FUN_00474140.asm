; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CStrList_findString_FUN_00474140(int *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 at 004749a5
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474140
        ;   Label: shape_edittool.cpp_CStrList_findString_FUN_00474140
    PUSH ESI                            ; 00474141
    PUSH EDI                            ; 00474142
    MOV ESI,dword ptr [ESP + 0x10]      ; 00474143
    MOV EDI,dword ptr [ESP + 0x14]      ; 00474147
    MOV EDX,dword ptr [ESI]             ; 0047414b
    XOR EBX,EBX                         ; 0047414d
    TEST EDX,EDX                        ; 0047414f
    JLE 0x00474170                      ; 00474151
        ;   XREF to: 00474170 (CONDITIONAL_JUMP)  ; LAB_00474170
    PUSH EDI                            ; 00474153
        ;   Label: LAB_00474153
    PUSH EBX                            ; 00474154
    PUSH ESI                            ; 00474155
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 00474156
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getStringAt_FUN_00474080()
    ADD ESP,0x8                         ; 0047415b
    PUSH EAX                            ; 0047415e
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047415f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00474164
    TEST EAX,EAX                        ; 00474167
    JZ 0x00474179                       ; 00474169
        ;   XREF to: 00474179 (CONDITIONAL_JUMP)  ; LAB_00474179
    INC EBX                             ; 0047416b
    CMP EBX,dword ptr [ESI]             ; 0047416c
    JL 0x00474153                       ; 0047416e
        ;   XREF to: 00474153 (CONDITIONAL_JUMP)  ; LAB_00474153
    MOV EAX,0xffffffff                  ; 00474170
        ;   Label: LAB_00474170
    POP EDI                             ; 00474175
    POP ESI                             ; 00474176
    POP EBX                             ; 00474177
    RET                                 ; 00474178
    MOV EAX,EBX                         ; 00474179
        ;   Label: LAB_00474179
    POP EDI                             ; 0047417b
    POP ESI                             ; 0047417c
    POP EBX                             ; 0047417d
    RET                                 ; 0047417e

