; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005706aa(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_005707db at 0057083d
;
; Called Functions:
;   FUN_005706dd
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005706aa
        ;   Label: FUN_005706aa
    MOV EBP,ESP                         ; 005706ab
    SUB ESP,0x10                        ; 005706ad
    MOV EDX,dword ptr [EBP + 0xc]       ; 005706b0
    PUSH EDX                            ; 005706b3
    PUSH EDX                            ; 005706b4
    MOV ECX,dword ptr [EBP + 0x8]       ; 005706b5
    PUSH ECX                            ; 005706b8
    CALL FUN_005706dd                   ; 005706b9
        ;   XREF to: 005706dd (UNCONDITIONAL_CALL)  ; undefined FUN_005706dd()
    MOV dword ptr [EBP + -0x10],EAX     ; 005706be
    MOV dword ptr [EBP + -0xc],EDX      ; 005706c1
    ADD ESP,0xc                         ; 005706c4
    MOV EAX,dword ptr [EBP + -0x10]     ; 005706c7
    MOV dword ptr [EBP + -0x8],EAX      ; 005706ca
    MOV EAX,dword ptr [EBP + -0xc]      ; 005706cd
    MOV dword ptr [EBP + -0x4],EAX      ; 005706d0
    MOV EAX,dword ptr [EBP + -0x8]      ; 005706d3
    MOV EDX,dword ptr [EBP + -0x4]      ; 005706d6
    MOV ESP,EBP                         ; 005706d9
    POP EBP                             ; 005706db
    RET                                 ; 005706dc

