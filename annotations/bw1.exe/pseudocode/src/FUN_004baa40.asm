; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004baa40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
;
; XREF[1]:
;   FUN_004bb6f0 at 004bb867
;
; Referenced Globals:
;   void* PTR_FUN_00600944 = 004baad0
;
; Called Functions:
;   FUN_0040d0a0
;   FUN_0040d220
;   FUN_00479580
;   FUN_004ba730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004baa40
        ;   Label: FUN_004baa40
    PUSH ESI                            ; 004baa41
    SUB ESP,0x100                       ; 004baa42
    MOV EBX,dword ptr [ESP + 0x10c]     ; 004baa48
    PUSH EBX                            ; 004baa4f
    CALL FUN_004ba730                   ; 004baa50
        ;   XREF to: 004ba730 (UNCONDITIONAL_CALL)  ; undefined FUN_004ba730()
    ADD ESP,0x4                         ; 004baa55
    ADD EAX,0x18                        ; 004baa58
    PUSH EAX                            ; 004baa5b
    CALL FUN_0040d0a0                   ; 004baa5c
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 004baa61
    LEA EBX,[EAX + -0x18]               ; 004baa64
    PUSH 0x0                            ; 004baa67
    LEA EAX,[ESP + 0x4]                 ; 004baa69
    PUSH EAX                            ; 004baa6d
    PUSH 0x0                            ; 004baa6e
    PUSH 0x0                            ; 004baa70
    MOV EDX,dword ptr [ESP + 0x120]     ; 004baa72
    PUSH EDX                            ; 004baa79
    MOV dword ptr [EBX + 0x14],0x600944 ; 004baa7a | PTR_FUN_00600944
    CALL FUN_00479580                   ; 004baa81
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 004baa86
    MOV ECX,dword ptr [ESP + 0x118]     ; 004baa89
    PUSH ECX                            ; 004baa90
    MOV ESI,dword ptr [ESP + 0x118]     ; 004baa91
    PUSH ESI                            ; 004baa98
    LEA EAX,[ESP + 0x8]                 ; 004baa99
    PUSH EAX                            ; 004baa9d
    LEA EAX,[EBX + 0x18]                ; 004baa9e
    PUSH EAX                            ; 004baaa1
    CALL FUN_0040d220                   ; 004baaa2
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d220()
    MOV EAX,dword ptr [EBX + 0x24]      ; 004baaa7
    MOV dword ptr [EBX + 0x8],EAX       ; 004baaaa
    MOV EAX,dword ptr [EBX + 0x28]      ; 004baaad
    ADD ESP,0x10                        ; 004baab0
    MOV dword ptr [EBX + 0xc],EAX       ; 004baab3
    MOV EAX,EBX                         ; 004baab6
    ADD ESP,0x100                       ; 004baab8
    POP ESI                             ; 004baabe
    POP EBX                             ; 004baabf
    RET                                 ; 004baac0

