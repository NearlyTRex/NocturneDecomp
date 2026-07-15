; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_signal_c__xcptlookup_FUN_1000a900(void *table,int xcpt_num)
;
; Parameters:
; void *           Stack[0x4]:4   table
; int              Stack[0x8]:4   xcpt_num
;
; XREF[1]:
;   crt_signal.c__XcptFilter_FUN_1000a7b0 at 1000a7c4
;
; Referenced Globals:
;   undefined4 DAT_10017754
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000a900
        ;   Label: crt_signal.c__xcptlookup_FUN_1000a900
    PUSH ESI                            ; 1000a904
    MOV ESI,EAX                         ; 1000a905
    MOV EDX,dword ptr [ESP + 0x8]       ; 1000a907
    CMP dword ptr [ESI],EDX             ; 1000a90b
        ;   Label: LAB_1000a90b
    JZ 0x1000a922                       ; 1000a90d
        ;   XREF to: 1000a922 (CONDITIONAL_JUMP)  ; LAB_1000a922
    ADD ESI,0xc                         ; 1000a90f
    MOV ECX,dword ptr [0x10017754]      ; 1000a912 | DAT_10017754
    LEA ECX,[ECX + ECX*0x2]             ; 1000a918
    LEA ECX,[EAX + ECX*0x4]             ; 1000a91b
    CMP ECX,ESI                         ; 1000a91e
    JA 0x1000a90b                       ; 1000a920
        ;   XREF to: 1000a90b (CONDITIONAL_JUMP)  ; LAB_1000a90b
    MOV EAX,dword ptr [ESI]             ; 1000a922
        ;   Label: LAB_1000a922
    SUB EAX,EDX                         ; 1000a924
    CMP EAX,0x1                         ; 1000a926
    SBB EAX,EAX                         ; 1000a929
    AND EAX,ESI                         ; 1000a92b
    POP ESI                             ; 1000a92d
    RET                                 ; 1000a92e

