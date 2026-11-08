; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005c3aaa(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_005c3bdb at 005c3c3d
;
; Called Functions:
;   FUN_005c3add
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c3aaa
        ;   Label: FUN_005c3aaa
    MOV EBP,ESP                         ; 005c3aab
    SUB ESP,0x10                        ; 005c3aad
    MOV EDX,dword ptr [EBP + 0xc]       ; 005c3ab0
    PUSH EDX                            ; 005c3ab3
    PUSH EDX                            ; 005c3ab4
    MOV ECX,dword ptr [EBP + 0x8]       ; 005c3ab5
    PUSH ECX                            ; 005c3ab8
    CALL FUN_005c3add                   ; 005c3ab9
        ;   XREF to: 005c3add (UNCONDITIONAL_CALL)  ; undefined FUN_005c3add()
    MOV dword ptr [EBP + -0x10],EAX     ; 005c3abe
    MOV dword ptr [EBP + -0xc],EDX      ; 005c3ac1
    ADD ESP,0xc                         ; 005c3ac4
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c3ac7
    MOV dword ptr [EBP + -0x8],EAX      ; 005c3aca
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c3acd
    MOV dword ptr [EBP + -0x4],EAX      ; 005c3ad0
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c3ad3
    MOV EDX,dword ptr [EBP + -0x4]      ; 005c3ad6
    MOV ESP,EBP                         ; 005c3ad9
    POP EBP                             ; 005c3adb
    RET                                 ; 005c3adc

