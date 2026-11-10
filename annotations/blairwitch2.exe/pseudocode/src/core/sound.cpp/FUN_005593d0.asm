; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_FUN_005593d0(CSound *this_ptr,char *out_result,char *wildcard_pattern)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   out_result
; char *           Stack[0xc]:4   wildcard_pattern
;
; XREF[2]:
;   core_dracbrid.cpp_FUN_00465400 at 004658a3
;   core_sound.cpp_playSfxInternal_FUN_005594c0 at 005598c2
;
; Referenced Globals:
;   CStrList g_CStrListInstance
;   undefined4 DAT_0264b460
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_005b849c
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;   shape_edittool.cpp_wildcardStringMatch_FUN_00485840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005593d0
        ;   Label: core_sound.cpp_FUN_005593d0
    PUSH ESI                            ; 005593d1
    PUSH EDI                            ; 005593d2
    PUSH EBP                            ; 005593d3
    MOV EAX,dword ptr [ESP + 0x18]      ; 005593d4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005593d8
    XOR EDX,EDX                         ; 005593dc
    XOR EBX,EBX                         ; 005593de
    MOV dword ptr [0x0264b460],EDX      ; 005593e0 | DAT_0264b460
    MOV byte ptr [EAX],0x0              ; 005593e6
    MOV EAX,[0x0264b450]                ; 005593e9 | g_CStrListInstance
        ;   Label: LAB_005593e9
    CMP EBX,EAX                         ; 005593ee
    JL 0x00559404                       ; 005593f0
        ;   XREF to: 00559404 (CONDITIONAL_JUMP)  ; LAB_00559404
    CMP dword ptr [0x0264b460],0x1      ; 005593f2 | DAT_0264b460
        ;   Label: LAB_005593f2
    JGE 0x00559471                      ; 005593f9
        ;   XREF to: 00559471 (CONDITIONAL_JUMP)  ; LAB_00559471
    POP EBP                             ; 005593ff
    POP EDI                             ; 00559400
    POP ESI                             ; 00559401
    POP EBX                             ; 00559402
    RET                                 ; 00559403
    PUSH 0x0                            ; 00559404
        ;   Label: LAB_00559404
    PUSH EBX                            ; 00559406
    PUSH 0x264b450                      ; 00559407 | g_CStrListInstance
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 0055940c
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00559411
    PUSH EAX                            ; 00559414
    PUSH EBP                            ; 00559415
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00485840 ; 00559416
        ;   XREF to: 00485840 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00485840(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0055941b
    TEST EAX,EAX                        ; 0055941e
    JZ 0x0055946b                       ; 00559420
        ;   XREF to: 0055946b (CONDITIONAL_JUMP)  ; LAB_0055946b
    PUSH EBX                            ; 00559422
    PUSH 0x264b450                      ; 00559423 | g_CStrListInstance
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00559428
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    IMUL EDI,dword ptr [0x0264b460],0x28 ; 0055942d | DAT_0264b460
    ADD ESP,0x8                         ; 00559434
    MOV ESI,EAX                         ; 00559437
    ADD EDI,0x264b468                   ; 00559439
    PUSH EDI                            ; 0055943f
    MOV AL,byte ptr [ESI]               ; 00559440
        ;   Label: LAB_00559440
    MOV byte ptr [EDI],AL               ; 00559442
    CMP AL,0x0                          ; 00559444
    JZ 0x00559458                       ; 00559446
        ;   XREF to: 00559458 (CONDITIONAL_JUMP)  ; LAB_00559458
    MOV AL,byte ptr [ESI + 0x1]         ; 00559448
    ADD ESI,0x2                         ; 0055944b
    MOV byte ptr [EDI + 0x1],AL         ; 0055944e
    ADD EDI,0x2                         ; 00559451
    CMP AL,0x0                          ; 00559454
    JNZ 0x00559440                      ; 00559456
        ;   XREF to: 00559440 (CONDITIONAL_JUMP)  ; LAB_00559440
    POP EDI                             ; 00559458
        ;   Label: LAB_00559458
    MOV ESI,dword ptr [0x0264b460]      ; 00559459 | DAT_0264b460
    INC ESI                             ; 0055945f
    MOV dword ptr [0x0264b460],ESI      ; 00559460 | DAT_0264b460
    CMP ESI,0x28                        ; 00559466
    JGE 0x005593f2                      ; 00559469
        ;   XREF to: 005593f2 (CONDITIONAL_JUMP)  ; LAB_005593f2
    INC EBX                             ; 0055946b
        ;   Label: LAB_0055946b
    JMP 0x005593e9                      ; 0055946c
        ;   XREF to: 005593e9 (UNCONDITIONAL_JUMP)  ; LAB_005593e9
    CALL crt_stdlib.c_rand_FUN_005b849c ; 00559471
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
        ;   Label: LAB_00559471
    MOV EDX,EAX                         ; 00559476
    MOV ECX,dword ptr [0x0264b460]      ; 00559478 | DAT_0264b460
    SAR EDX,0x1f                        ; 0055947e
    IDIV ECX                            ; 00559481
    LEA EAX,[EDX*0x4 + 0x0]             ; 00559483
    ADD EAX,EDX                         ; 0055948a
    MOV ESI,0x264b468                   ; 0055948c
    SHL EAX,0x3                         ; 00559491
    MOV EDI,dword ptr [ESP + 0x18]      ; 00559494
    ADD ESI,EAX                         ; 00559498
    PUSH EDI                            ; 0055949a
    MOV AL,byte ptr [ESI]               ; 0055949b
        ;   Label: LAB_0055949b
    MOV byte ptr [EDI],AL               ; 0055949d
    CMP AL,0x0                          ; 0055949f
    JZ 0x005594b3                       ; 005594a1
        ;   XREF to: 005594b3 (CONDITIONAL_JUMP)  ; LAB_005594b3
    MOV AL,byte ptr [ESI + 0x1]         ; 005594a3
    ADD ESI,0x2                         ; 005594a6
    MOV byte ptr [EDI + 0x1],AL         ; 005594a9
    ADD EDI,0x2                         ; 005594ac
    CMP AL,0x0                          ; 005594af
    JNZ 0x0055949b                      ; 005594b1
        ;   XREF to: 0055949b (CONDITIONAL_JUMP)  ; LAB_0055949b
    POP EDI                             ; 005594b3
        ;   Label: LAB_005594b3
    POP EBP                             ; 005594b4
    POP EDI                             ; 005594b5
    POP ESI                             ; 005594b6
    POP EBX                             ; 005594b7
    RET                                 ; 005594b8

