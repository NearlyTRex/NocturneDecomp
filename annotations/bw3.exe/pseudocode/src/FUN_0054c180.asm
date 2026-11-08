; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054c180(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_00518680 at 0051890f
;   FUN_0054e850 at 0054e88e
;   FUN_0056c140 at 0056c554
;
; Called Functions:
;   FUN_0054c1b0
;   FUN_0054dd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c180
        ;   Label: FUN_0054c180
    PUSH -0x1                           ; 0054c181
    MOV EDX,dword ptr [ESP + 0x10]      ; 0054c183
    PUSH dword ptr [ESP + 0x14]         ; 0054c187
    PUSH EDX                            ; 0054c18b
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054c18c
    PUSH ECX                            ; 0054c190
    CALL FUN_0054c1b0                   ; 0054c191
        ;   XREF to: 0054c1b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c1b0()
    ADD ESP,0x10                        ; 0054c196
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054c199
    PUSH EBX                            ; 0054c19d
    CALL FUN_0054dd10                   ; 0054c19e
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dd10()
    ADD ESP,0x4                         ; 0054c1a3
    POP EBX                             ; 0054c1a6
    RET                                 ; 0054c1a7

