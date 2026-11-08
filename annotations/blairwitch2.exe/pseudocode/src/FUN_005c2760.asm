; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c2760(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_005c2ab4 at 005c2b09
;
; Referenced Globals:
;   void* PTR_EnterCriticalSection_005c8530 = 001c8cd0
;   void* PTR_GetCurrentThreadId_005c8580 = 001c8e42
;   undefined4 DAT_02681040
;
; Called Functions:
;   EnterCriticalSection
;   FUN_005c2624
;   FUN_005c27c4
;   GetCurrentThreadId
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2760
        ;   Label: FUN_005c2760
    PUSH ESI                            ; 005c2761
    PUSH EDI                            ; 005c2762
    PUSH EBP                            ; 005c2763
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c2764
    CALL dword ptr CS:[0x5c8580]        ; 005c2768 | PTR_GetCurrentThreadId_005c8580
    MOV EDX,dword ptr [EBX + 0x8]       ; 005c276f
    MOV ESI,EAX                         ; 005c2772
    CMP EAX,EDX                         ; 005c2774
    JZ 0x005c27ba                       ; 005c2776
        ;   XREF to: 005c27ba (CONDITIONAL_JUMP)  ; LAB_005c27ba
    CMP dword ptr [EBX + 0x4],0x0       ; 005c2778
    JNZ 0x005c27ad                      ; 005c277c
        ;   XREF to: 005c27ad (CONDITIONAL_JUMP)  ; LAB_005c27ad
    PUSH 0x2681040                      ; 005c277e | DAT_02681040
    CALL FUN_005c2760                   ; 005c2783
        ;   XREF to: 005c2760 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2760()
    MOV EDI,dword ptr [EBX + 0x4]       ; 005c2788
    ADD ESP,0x4                         ; 005c278b
    TEST EDI,EDI                        ; 005c278e
    JNZ 0x005c27a0                      ; 005c2790
        ;   XREF to: 005c27a0 (CONDITIONAL_JUMP)  ; LAB_005c27a0
    CALL FUN_005c2624                   ; 005c2792
        ;   XREF to: 005c2624 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2624()
    MOV dword ptr [EBX + 0x4],0x1       ; 005c2797
    MOV dword ptr [EBX],EAX             ; 005c279e
    PUSH 0x2681040                      ; 005c27a0 | DAT_02681040
        ;   Label: LAB_005c27a0
    CALL FUN_005c27c4                   ; 005c27a5
        ;   XREF to: 005c27c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c27c4()
    ADD ESP,0x4                         ; 005c27aa
    MOV EBP,dword ptr [EBX]             ; 005c27ad
        ;   Label: LAB_005c27ad
    PUSH EBP                            ; 005c27af
    CALL dword ptr CS:[0x5c8530]        ; 005c27b0 | PTR_EnterCriticalSection_005c8530
    MOV dword ptr [EBX + 0x8],ESI       ; 005c27b7
    INC dword ptr [EBX + 0xc]           ; 005c27ba
        ;   Label: LAB_005c27ba
    POP EBP                             ; 005c27bd
    POP EDI                             ; 005c27be
    POP ESI                             ; 005c27bf
    POP EBX                             ; 005c27c0
    RET                                 ; 005c27c1

