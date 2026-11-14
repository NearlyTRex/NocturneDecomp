; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_findRandomSoundFile_FUN_0057be00(CSound *this_ptr,char *out_result,char *wildcard_pattern)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   out_result
; char *           Stack[0xc]:4   wildcard_pattern
;
; XREF[2]:
;   core_dracbrid.cpp_FUN_0047d920 at 0047ddc3
;   core_sound.cpp_playSfxInternal_FUN_0057bef0 at 0057c2f2
;
; Referenced Globals:
;   CStrList g_CStrListInstance
;   undefined4 DAT_02c82c30
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_005c084c
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;   shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057be00
        ;   Label: core_sound.cpp_CSound_findRandomSoundFile_FUN_0057be00
    PUSH ESI                            ; 0057be01
    PUSH EDI                            ; 0057be02
    PUSH EBP                            ; 0057be03
    MOV EAX,dword ptr [ESP + 0x18]      ; 0057be04
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0057be08
    XOR EDX,EDX                         ; 0057be0c
    XOR EBX,EBX                         ; 0057be0e
    MOV dword ptr [0x02c82c30],EDX      ; 0057be10 | DAT_02c82c30
    MOV byte ptr [EAX],0x0              ; 0057be16
    MOV EAX,[0x02c82c20]                ; 0057be19 | g_CStrListInstance
        ;   Label: LAB_0057be19
    CMP EBX,EAX                         ; 0057be1e
    JL 0x0057be34                       ; 0057be20
        ;   XREF to: 0057be34 (CONDITIONAL_JUMP)  ; LAB_0057be34
    CMP dword ptr [0x02c82c30],0x1      ; 0057be22 | DAT_02c82c30
        ;   Label: LAB_0057be22
    JGE 0x0057bea1                      ; 0057be29
        ;   XREF to: 0057bea1 (CONDITIONAL_JUMP)  ; LAB_0057bea1
    POP EBP                             ; 0057be2f
    POP EDI                             ; 0057be30
    POP ESI                             ; 0057be31
    POP EBX                             ; 0057be32
    RET                                 ; 0057be33
    PUSH 0x0                            ; 0057be34
        ;   Label: LAB_0057be34
    PUSH EBX                            ; 0057be36
    PUSH 0x2c82c20                      ; 0057be37 | g_CStrListInstance
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 0057be3c
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0057be41
    PUSH EAX                            ; 0057be44
    PUSH EBP                            ; 0057be45
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0 ; 0057be46
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0057be4b
    TEST EAX,EAX                        ; 0057be4e
    JZ 0x0057be9b                       ; 0057be50
        ;   XREF to: 0057be9b (CONDITIONAL_JUMP)  ; LAB_0057be9b
    PUSH EBX                            ; 0057be52
    PUSH 0x2c82c20                      ; 0057be53 | g_CStrListInstance
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 0057be58
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    IMUL EDI,dword ptr [0x02c82c30],0x28 ; 0057be5d | DAT_02c82c30
    ADD ESP,0x8                         ; 0057be64
    MOV ESI,EAX                         ; 0057be67
    ADD EDI,0x2c82c38                   ; 0057be69
    PUSH EDI                            ; 0057be6f
    MOV AL,byte ptr [ESI]               ; 0057be70
        ;   Label: LAB_0057be70
    MOV byte ptr [EDI],AL               ; 0057be72
    CMP AL,0x0                          ; 0057be74
    JZ 0x0057be88                       ; 0057be76
        ;   XREF to: 0057be88 (CONDITIONAL_JUMP)  ; LAB_0057be88
    MOV AL,byte ptr [ESI + 0x1]         ; 0057be78
    ADD ESI,0x2                         ; 0057be7b
    MOV byte ptr [EDI + 0x1],AL         ; 0057be7e
    ADD EDI,0x2                         ; 0057be81
    CMP AL,0x0                          ; 0057be84
    JNZ 0x0057be70                      ; 0057be86
        ;   XREF to: 0057be70 (CONDITIONAL_JUMP)  ; LAB_0057be70
    POP EDI                             ; 0057be88
        ;   Label: LAB_0057be88
    MOV ESI,dword ptr [0x02c82c30]      ; 0057be89 | DAT_02c82c30
    INC ESI                             ; 0057be8f
    MOV dword ptr [0x02c82c30],ESI      ; 0057be90 | DAT_02c82c30
    CMP ESI,0x28                        ; 0057be96
    JGE 0x0057be22                      ; 0057be99
        ;   XREF to: 0057be22 (CONDITIONAL_JUMP)  ; LAB_0057be22
    INC EBX                             ; 0057be9b
        ;   Label: LAB_0057be9b
    JMP 0x0057be19                      ; 0057be9c
        ;   XREF to: 0057be19 (UNCONDITIONAL_JUMP)  ; LAB_0057be19
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0057bea1
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
        ;   Label: LAB_0057bea1
    MOV EDX,EAX                         ; 0057bea6
    MOV ECX,dword ptr [0x02c82c30]      ; 0057bea8 | DAT_02c82c30
    SAR EDX,0x1f                        ; 0057beae
    IDIV ECX                            ; 0057beb1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057beb3
    ADD EAX,EDX                         ; 0057beba
    MOV ESI,0x2c82c38                   ; 0057bebc
    SHL EAX,0x3                         ; 0057bec1
    MOV EDI,dword ptr [ESP + 0x18]      ; 0057bec4
    ADD ESI,EAX                         ; 0057bec8
    PUSH EDI                            ; 0057beca
    MOV AL,byte ptr [ESI]               ; 0057becb
        ;   Label: LAB_0057becb
    MOV byte ptr [EDI],AL               ; 0057becd
    CMP AL,0x0                          ; 0057becf
    JZ 0x0057bee3                       ; 0057bed1
        ;   XREF to: 0057bee3 (CONDITIONAL_JUMP)  ; LAB_0057bee3
    MOV AL,byte ptr [ESI + 0x1]         ; 0057bed3
    ADD ESI,0x2                         ; 0057bed6
    MOV byte ptr [EDI + 0x1],AL         ; 0057bed9
    ADD EDI,0x2                         ; 0057bedc
    CMP AL,0x0                          ; 0057bedf
    JNZ 0x0057becb                      ; 0057bee1
        ;   XREF to: 0057becb (CONDITIONAL_JUMP)  ; LAB_0057becb
    POP EDI                             ; 0057bee3
        ;   Label: LAB_0057bee3
    POP EBP                             ; 0057bee4
    POP EDI                             ; 0057bee5
    POP ESI                             ; 0057bee6
    POP EBX                             ; 0057bee7
    RET                                 ; 0057bee8

