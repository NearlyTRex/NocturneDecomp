; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481250(undefined4 param_1,char *param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined1       Stack[-0x134]:1  local_134
;
; XREF[1]:
;   FUN_0047c970 at 0047c9e8
;
; Called Functions:
;   FUN_00481240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481250
        ;   Label: FUN_00481250
    PUSH ESI                            ; 00481251
    SUB ESP,0x12c                       ; 00481252
    MOV ESI,dword ptr [ESP + 0x144]     ; 00481258
    MOV EDX,dword ptr [ESP + 0x140]     ; 0048125f
    PUSH EDX                            ; 00481266
    MOV ECX,dword ptr [ESP + 0x13c]     ; 00481267
    PUSH ECX                            ; 0048126e
    CALL FUN_00481240                   ; 0048126f
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; undefined FUN_00481240()
    ADD ESP,0x8                         ; 00481274
    MOV ECX,EAX                         ; 00481277
    TEST EAX,EAX                        ; 00481279
    JZ 0x004812a1                       ; 0048127b
        ;   XREF to: 004812a1 (CONDITIONAL_JUMP)  ; LAB_004812a1
    TEST ESI,ESI                        ; 0048127d
        ;   Label: LAB_0048127d
    JLE 0x004812a1                      ; 0048127f
        ;   XREF to: 004812a1 (CONDITIONAL_JUMP)  ; LAB_004812a1
    MOV EDX,ESP                         ; 00481281
    MOV BH,byte ptr [ECX]               ; 00481283
    MOV EAX,ECX                         ; 00481285
    TEST BH,BH                          ; 00481287
    JZ 0x00481297                       ; 00481289
        ;   XREF to: 00481297 (CONDITIONAL_JUMP)  ; LAB_00481297
    MOV BH,byte ptr [EAX]               ; 0048128b
        ;   Label: LAB_0048128b
    LEA ECX,[EAX + 0x1]                 ; 0048128d
    CMP BH,0x9                          ; 00481290
    JNZ 0x004812d1                      ; 00481293
        ;   XREF to: 004812d1 (CONDITIONAL_JUMP)  ; LAB_004812d1
    MOV EAX,ECX                         ; 00481295
    MOV byte ptr [EDX],0x0              ; 00481297
        ;   Label: LAB_00481297
    MOV ECX,EAX                         ; 0048129a
    DEC ESI                             ; 0048129c
    TEST EAX,EAX                        ; 0048129d
    JNZ 0x0048127d                      ; 0048129f
        ;   XREF to: 0048127d (CONDITIONAL_JUMP)  ; LAB_0048127d
    TEST ECX,ECX                        ; 004812a1
        ;   Label: LAB_004812a1
    JZ 0x004812e0                       ; 004812a3
        ;   XREF to: 004812e0 (CONDITIONAL_JUMP)  ; LAB_004812e0
    MOV EDX,dword ptr [ESP + 0x13c]     ; 004812a5
    MOV BL,byte ptr [ECX]               ; 004812ac
    MOV EAX,ECX                         ; 004812ae
    TEST BL,BL                          ; 004812b0
    JZ 0x004812c5                       ; 004812b2
        ;   XREF to: 004812c5 (CONDITIONAL_JUMP)  ; LAB_004812c5
    CMP byte ptr [EAX],0x9              ; 004812b4
        ;   Label: LAB_004812b4
    JZ 0x004812c5                       ; 004812b7
        ;   XREF to: 004812c5 (CONDITIONAL_JUMP)  ; LAB_004812c5
    MOV CL,byte ptr [EAX]               ; 004812b9
    INC EAX                             ; 004812bb
    MOV byte ptr [EDX],CL               ; 004812bc
    MOV CL,byte ptr [EAX]               ; 004812be
    INC EDX                             ; 004812c0
    TEST CL,CL                          ; 004812c1
    JNZ 0x004812b4                      ; 004812c3
        ;   XREF to: 004812b4 (CONDITIONAL_JUMP)  ; LAB_004812b4
    MOV byte ptr [EDX],0x0              ; 004812c5
        ;   Label: LAB_004812c5
    ADD ESP,0x12c                       ; 004812c8
    POP ESI                             ; 004812ce
    POP EBX                             ; 004812cf
    RET                                 ; 004812d0
    MOV AL,byte ptr [EAX]               ; 004812d1
        ;   Label: LAB_004812d1
    MOV byte ptr [EDX],AL               ; 004812d3
    INC EDX                             ; 004812d5
    MOV BL,byte ptr [ECX]               ; 004812d6
    MOV EAX,ECX                         ; 004812d8
    TEST BL,BL                          ; 004812da
    JNZ 0x0048128b                      ; 004812dc
        ;   XREF to: 0048128b (CONDITIONAL_JUMP)  ; LAB_0048128b
    JMP 0x00481297                      ; 004812de
        ;   XREF to: 00481297 (UNCONDITIONAL_JUMP)  ; LAB_00481297
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004812e0
        ;   Label: LAB_004812e0
    MOV byte ptr [EAX],0x0              ; 004812e7
    ADD ESP,0x12c                       ; 004812ea
    POP ESI                             ; 004812f0
    POP EBX                             ; 004812f1
    RET                                 ; 004812f2

