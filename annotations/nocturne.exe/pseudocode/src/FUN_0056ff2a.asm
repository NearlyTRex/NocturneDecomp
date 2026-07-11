; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ff2a(undefined4 *param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0056b405 at 0056b46d
;   FUN_0056b75d at 0056b7ba
;   FUN_0056b896 at 0056b8dc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056ff2a
        ;   Label: FUN_0056ff2a
    MOV dword ptr [EAX],0x0             ; 0056ff2e
    MOV dword ptr [EAX + 0x10],0x0      ; 0056ff34
    MOV dword ptr [EAX + 0xc],0x0       ; 0056ff3b
    MOV dword ptr [EAX + 0x14],0x0      ; 0056ff42
    MOV dword ptr [EAX + 0x18],0x6      ; 0056ff49
    MOV dword ptr [EAX + 0x1c],0x0      ; 0056ff50
    MOV byte ptr [EAX + 0x24],0x20      ; 0056ff57
    MOV dword ptr [EAX + 0x8],0x0       ; 0056ff5b
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056ff62
    MOV dword ptr [EAX + 0x20],0x0      ; 0056ff66
    TEST EDX,EDX                        ; 0056ff6d
    JZ 0x0056ff79                       ; 0056ff6f
        ;   XREF to: 0056ff79 (CONDITIONAL_JUMP)  ; LAB_0056ff79
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056ff71
        ;   Label: LAB_0056ff71
    MOV dword ptr [EAX + 0x4],EDX       ; 0056ff75
    RET                                 ; 0056ff78
    MOV dword ptr [EAX + 0x10],0x1      ; 0056ff79
        ;   Label: LAB_0056ff79
    JMP 0x0056ff71                      ; 0056ff80
        ;   XREF to: 0056ff71 (UNCONDITIONAL_JUMP)  ; LAB_0056ff71

