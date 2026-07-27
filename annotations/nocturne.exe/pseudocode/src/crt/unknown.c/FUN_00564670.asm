; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_00564670(undefined4 *param_1)
;
;
; XREF[2]:
;   crt_stdio.c_fread_FUN_005636d0 at 00563823
;   crt_unknown.c_FUN_00564640 at 00564646
;
; Called Functions:
;   FUN_00568ed0
;   FUN_00568f70
;   FUN_0056aefc
;   FUN_0056af50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564670
        ;   Label: crt_unknown.c_FUN_00564670
    PUSH ESI                            ; 00564671
    PUSH EDI                            ; 00564672
    PUSH EBP                            ; 00564673
    MOV EBX,dword ptr [ESP + 0x14]      ; 00564674
    MOV EAX,dword ptr [EBX + 0x8]       ; 00564678
    CMP dword ptr [EAX + 0x8],0x0       ; 0056467b
    JNZ 0x0056468a                      ; 0056467f
        ;   XREF to: 0056468a (CONDITIONAL_JUMP)  ; LAB_0056468a
    PUSH EBX                            ; 00564681
    CALL FUN_00568ed0                   ; 00564682
        ;   XREF to: 00568ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00568ed0()
    ADD ESP,0x4                         ; 00564687
    MOV AH,byte ptr [EBX + 0xd]         ; 0056468a
        ;   Label: LAB_0056468a
    TEST AH,0x20                        ; 0056468d
    JZ 0x005646a4                       ; 00564690
        ;   XREF to: 005646a4 (CONDITIONAL_JUMP)  ; LAB_005646a4
    TEST AH,0x6                         ; 00564692
    JZ 0x005646a4                       ; 00564695
        ;   XREF to: 005646a4 (CONDITIONAL_JUMP)  ; LAB_005646a4
    PUSH 0x2000                         ; 00564697
    CALL FUN_0056aefc                   ; 0056469c
        ;   XREF to: 0056aefc (UNCONDITIONAL_CALL)  ; undefined FUN_0056aefc()
    ADD ESP,0x4                         ; 005646a1
    MOV DH,byte ptr [EBX + 0xc]         ; 005646a4
        ;   Label: LAB_005646a4
    AND DH,0xfb                         ; 005646a7
    MOV EAX,dword ptr [EBX + 0x8]       ; 005646aa
    MOV byte ptr [EBX + 0xc],DH         ; 005646ad
    MOV EAX,dword ptr [EAX + 0x8]       ; 005646b0
    MOV dword ptr [EBX],EAX             ; 005646b3
    MOV EAX,dword ptr [EBX + 0xc]       ; 005646b5
    AND EAX,0x2400                      ; 005646b8
    CMP EAX,0x2400                      ; 005646bd
    JNZ 0x005646e7                      ; 005646c2
        ;   XREF to: 005646e7 (CONDITIONAL_JUMP)  ; LAB_005646e7
    MOV ECX,dword ptr [EBX + 0x10]      ; 005646c4
    TEST ECX,ECX                        ; 005646c7
    JNZ 0x005646e7                      ; 005646c9
        ;   XREF to: 005646e7 (CONDITIONAL_JUMP)  ; LAB_005646e7
    MOV dword ptr [EBX + 0x4],ECX       ; 005646cb
    CALL FUN_0056af50                   ; 005646ce
        ;   XREF to: 0056af50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056af50()
    MOV EDX,EAX                         ; 005646d3
    CMP EAX,-0x1                        ; 005646d5
    JZ 0x0056470a                       ; 005646d8
        ;   XREF to: 0056470a (CONDITIONAL_JUMP)  ; LAB_0056470a
    MOV EAX,dword ptr [EBX]             ; 005646da
    MOV byte ptr [EAX],DL               ; 005646dc
    MOV dword ptr [EBX + 0x4],0x1       ; 005646de
    JMP 0x0056472f                      ; 005646e5
        ;   XREF to: 0056472f (UNCONDITIONAL_JUMP)  ; LAB_0056472f
    TEST byte ptr [EBX + 0xd],0x4       ; 005646e7
        ;   Label: LAB_005646e7
    JZ 0x005646f4                       ; 005646eb
        ;   XREF to: 005646f4 (CONDITIONAL_JUMP)  ; LAB_005646f4
    MOV EAX,0x1                         ; 005646ed
    JMP 0x005646f7                      ; 005646f2
        ;   XREF to: 005646f7 (UNCONDITIONAL_JUMP)  ; LAB_005646f7
    MOV EAX,dword ptr [EBX + 0x14]      ; 005646f4
        ;   Label: LAB_005646f4
    PUSH EAX                            ; 005646f7
        ;   Label: LAB_005646f7
    MOV ESI,dword ptr [EBX]             ; 005646f8
    PUSH ESI                            ; 005646fa
    MOV EDI,dword ptr [EBX + 0x10]      ; 005646fb
    PUSH EDI                            ; 005646fe
    CALL FUN_00568f70                   ; 005646ff
        ;   XREF to: 00568f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00568f70()
    ADD ESP,0xc                         ; 00564704
    MOV dword ptr [EBX + 0x4],EAX       ; 00564707
    MOV EBP,dword ptr [EBX + 0x4]       ; 0056470a
        ;   Label: LAB_0056470a
    TEST EBP,EBP                        ; 0056470d
    JG 0x0056472f                       ; 0056470f
        ;   XREF to: 0056472f (CONDITIONAL_JUMP)  ; LAB_0056472f
    JNZ 0x0056471f                      ; 00564711
        ;   XREF to: 0056471f (CONDITIONAL_JUMP)  ; LAB_0056471f
    OR byte ptr [EBX + 0xc],0x10        ; 00564713
    MOV EAX,dword ptr [EBX + 0x4]       ; 00564717
    POP EBP                             ; 0056471a
    POP EDI                             ; 0056471b
    POP ESI                             ; 0056471c
    POP EBX                             ; 0056471d
    RET                                 ; 0056471e
    MOV CH,byte ptr [EBX + 0xc]         ; 0056471f
        ;   Label: LAB_0056471f
    MOV dword ptr [EBX + 0x4],0x0       ; 00564722
    OR CH,0x20                          ; 00564729
    MOV byte ptr [EBX + 0xc],CH         ; 0056472c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0056472f
        ;   Label: LAB_0056472f
    POP EBP                             ; 00564732
    POP EDI                             ; 00564733
    POP ESI                             ; 00564734
    POP EBX                             ; 00564735
    RET                                 ; 00564736

