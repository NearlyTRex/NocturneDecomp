; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043b800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x18]:1  local_18
;
; XREF[5]:
;   FUN_00411f20 at 00411fbf
;   FUN_00495340 at 004953be
;   FUN_004cc1b0 at 004cc224
;   FUN_004dec50 at 004dedb6
;   FUN_004f5ff0 at 004f612d
;
; Called Functions:
;   FUN_0043b890
;   FUN_0055b180
;   FUN_0055ced0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b800
        ;   Label: FUN_0043b800
    PUSH ESI                            ; 0043b801
    PUSH EDI                            ; 0043b802
    SUB ESP,0x7c                        ; 0043b803
    MOV EBX,dword ptr [ESP + 0x98]      ; 0043b806
    LEA EAX,[ESP + 0x60]                ; 0043b80d
    PUSH EAX                            ; 0043b811
    MOV EDX,dword ptr [ESP + 0x98]      ; 0043b812
    PUSH EDX                            ; 0043b819
    MOV ECX,dword ptr [ESP + 0x94]      ; 0043b81a
    PUSH dword ptr [ESP + 0x98]         ; 0043b821
    PUSH ECX                            ; 0043b828
    CALL FUN_0043b890                   ; 0043b829
        ;   XREF to: 0043b890 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b890()
    ADD ESP,0x10                        ; 0043b82e
    LEA EAX,[ESP + 0x70]                ; 0043b831
    PUSH EAX                            ; 0043b835
    LEA EAX,[ESP + 0x64]                ; 0043b836
    PUSH EAX                            ; 0043b83a
    LEA ESI,[ESP + 0x38]                ; 0043b83b
    LEA EDI,[ESP + 0x8]                 ; 0043b83f
    CALL FUN_0055ced0                   ; 0043b843
        ;   XREF to: 0055ced0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ced0()
    MOV ECX,0xc                         ; 0043b848
    ADD ESP,0x4                         ; 0043b84d
    LEA EAX,[ESP + 0x4]                 ; 0043b850
    LEA ESI,[ESP + 0x34]                ; 0043b854
    PUSH EAX                            ; 0043b858
    MOVSD.REP ES:EDI,ESI                ; 0043b859
    CALL FUN_0055b180                   ; 0043b85b
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b180()
    ADD ESP,0x8                         ; 0043b860
    CMP EBX,EAX                         ; 0043b863
    JNZ 0x0043b86e                      ; 0043b865
        ;   XREF to: 0043b86e (CONDITIONAL_JUMP)  ; LAB_0043b86e
    ADD ESP,0x7c                        ; 0043b867
    POP EDI                             ; 0043b86a
    POP ESI                             ; 0043b86b
    POP EBX                             ; 0043b86c
    RET                                 ; 0043b86d
    MOV EDX,dword ptr [EAX]             ; 0043b86e
        ;   Label: LAB_0043b86e
    MOV dword ptr [EBX],EDX             ; 0043b870
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043b872
    MOV dword ptr [EBX + 0x4],EDX       ; 0043b875
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043b878
    MOV dword ptr [EBX + 0x8],EDX       ; 0043b87b
    ADD ESP,0x7c                        ; 0043b87e
    POP EDI                             ; 0043b881
    POP ESI                             ; 0043b882
    POP EBX                             ; 0043b883
    RET                                 ; 0043b884

