; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_findRandomSoundFile_FUN_0055ef30(CSound *this_ptr,char *out_result,char *wildcard_pattern)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   out_result
; char *           Stack[0xc]:4   wildcard_pattern
;
; XREF[1]:
;   core_sound.cpp_playSfxInternal_FUN_0055f020 at 0055f422
;
; Referenced Globals:
;   CStrList g_CStrListInstance
;   undefined4 DAT_02cf5850
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_005a35cc
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;   shape_edittool.cpp_wildcardStringMatch_FUN_00486a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ef30
        ;   Label: core_sound.cpp_CSound_findRandomSoundFile_FUN_0055ef30
    PUSH ESI                            ; 0055ef31
    PUSH EDI                            ; 0055ef32
    PUSH EBP                            ; 0055ef33
    MOV EAX,dword ptr [ESP + 0x18]      ; 0055ef34
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0055ef38
    XOR EDX,EDX                         ; 0055ef3c
    XOR EBX,EBX                         ; 0055ef3e
    MOV dword ptr [0x02cf5850],EDX      ; 0055ef40 | DAT_02cf5850
    MOV byte ptr [EAX],0x0              ; 0055ef46
    MOV EAX,[0x02cf5840]                ; 0055ef49 | g_CStrListInstance
        ;   Label: LAB_0055ef49
    CMP EBX,EAX                         ; 0055ef4e
    JL 0x0055ef64                       ; 0055ef50
        ;   XREF to: 0055ef64 (CONDITIONAL_JUMP)  ; LAB_0055ef64
    CMP dword ptr [0x02cf5850],0x1      ; 0055ef52 | DAT_02cf5850
        ;   Label: LAB_0055ef52
    JGE 0x0055efd1                      ; 0055ef59
        ;   XREF to: 0055efd1 (CONDITIONAL_JUMP)  ; LAB_0055efd1
    POP EBP                             ; 0055ef5f
    POP EDI                             ; 0055ef60
    POP ESI                             ; 0055ef61
    POP EBX                             ; 0055ef62
    RET                                 ; 0055ef63
    PUSH 0x0                            ; 0055ef64
        ;   Label: LAB_0055ef64
    PUSH EBX                            ; 0055ef66
    PUSH 0x2cf5840                      ; 0055ef67 | g_CStrListInstance
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 0055ef6c
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0055ef71
    PUSH EAX                            ; 0055ef74
    PUSH EBP                            ; 0055ef75
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00486a40 ; 0055ef76
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00486a40(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0055ef7b
    TEST EAX,EAX                        ; 0055ef7e
    JZ 0x0055efcb                       ; 0055ef80
        ;   XREF to: 0055efcb (CONDITIONAL_JUMP)  ; LAB_0055efcb
    PUSH EBX                            ; 0055ef82
    PUSH 0x2cf5840                      ; 0055ef83 | g_CStrListInstance
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 0055ef88
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    IMUL EDI,dword ptr [0x02cf5850],0x28 ; 0055ef8d | DAT_02cf5850
    ADD ESP,0x8                         ; 0055ef94
    MOV ESI,EAX                         ; 0055ef97
    ADD EDI,0x2cf5858                   ; 0055ef99
    PUSH EDI                            ; 0055ef9f
    MOV AL,byte ptr [ESI]               ; 0055efa0
        ;   Label: LAB_0055efa0
    MOV byte ptr [EDI],AL               ; 0055efa2
    CMP AL,0x0                          ; 0055efa4
    JZ 0x0055efb8                       ; 0055efa6
        ;   XREF to: 0055efb8 (CONDITIONAL_JUMP)  ; LAB_0055efb8
    MOV AL,byte ptr [ESI + 0x1]         ; 0055efa8
    ADD ESI,0x2                         ; 0055efab
    MOV byte ptr [EDI + 0x1],AL         ; 0055efae
    ADD EDI,0x2                         ; 0055efb1
    CMP AL,0x0                          ; 0055efb4
    JNZ 0x0055efa0                      ; 0055efb6
        ;   XREF to: 0055efa0 (CONDITIONAL_JUMP)  ; LAB_0055efa0
    POP EDI                             ; 0055efb8
        ;   Label: LAB_0055efb8
    MOV ESI,dword ptr [0x02cf5850]      ; 0055efb9 | DAT_02cf5850
    INC ESI                             ; 0055efbf
    MOV dword ptr [0x02cf5850],ESI      ; 0055efc0 | DAT_02cf5850
    CMP ESI,0x28                        ; 0055efc6
    JGE 0x0055ef52                      ; 0055efc9
        ;   XREF to: 0055ef52 (CONDITIONAL_JUMP)  ; LAB_0055ef52
    INC EBX                             ; 0055efcb
        ;   Label: LAB_0055efcb
    JMP 0x0055ef49                      ; 0055efcc
        ;   XREF to: 0055ef49 (UNCONDITIONAL_JUMP)  ; LAB_0055ef49
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0055efd1
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_0055efd1
    MOV EDX,EAX                         ; 0055efd6
    MOV ECX,dword ptr [0x02cf5850]      ; 0055efd8 | DAT_02cf5850
    SAR EDX,0x1f                        ; 0055efde
    IDIV ECX                            ; 0055efe1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055efe3
    ADD EAX,EDX                         ; 0055efea
    MOV ESI,0x2cf5858                   ; 0055efec
    SHL EAX,0x3                         ; 0055eff1
    MOV EDI,dword ptr [ESP + 0x18]      ; 0055eff4
    ADD ESI,EAX                         ; 0055eff8
    PUSH EDI                            ; 0055effa
    MOV AL,byte ptr [ESI]               ; 0055effb
        ;   Label: LAB_0055effb
    MOV byte ptr [EDI],AL               ; 0055effd
    CMP AL,0x0                          ; 0055efff
    JZ 0x0055f013                       ; 0055f001
        ;   XREF to: 0055f013 (CONDITIONAL_JUMP)  ; LAB_0055f013
    MOV AL,byte ptr [ESI + 0x1]         ; 0055f003
    ADD ESI,0x2                         ; 0055f006
    MOV byte ptr [EDI + 0x1],AL         ; 0055f009
    ADD EDI,0x2                         ; 0055f00c
    CMP AL,0x0                          ; 0055f00f
    JNZ 0x0055effb                      ; 0055f011
        ;   XREF to: 0055effb (CONDITIONAL_JUMP)  ; LAB_0055effb
    POP EDI                             ; 0055f013
        ;   Label: LAB_0055f013
    POP EBP                             ; 0055f014
    POP EDI                             ; 0055f015
    POP ESI                             ; 0055f016
    POP EBX                             ; 0055f017
    RET                                 ; 0055f018

