; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056eed0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00563060 at 00563de8
;
; Referenced Globals:
;   undefined4 DAT_005fc1d4
;   undefined4 DAT_01c225d8
;
; Called Functions:
;   FUN_0040c8f0
;   FUN_0047a1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056eed0
        ;   Label: FUN_0056eed0
    PUSH ESI                            ; 0056eed1
    PUSH EDI                            ; 0056eed2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056eed3
    MOV EDX,dword ptr [EBX + 0x25698]   ; 0056eed7
    TEST EDX,EDX                        ; 0056eedd
    JNZ 0x0056eee5                      ; 0056eedf
        ;   XREF to: 0056eee5 (CONDITIONAL_JUMP)  ; LAB_0056eee5
    POP EDI                             ; 0056eee1
        ;   Label: LAB_0056eee1
    POP ESI                             ; 0056eee2
    POP EBX                             ; 0056eee3
    RET                                 ; 0056eee4
    PUSH dword ptr [ESP + 0x14]         ; 0056eee5
        ;   Label: LAB_0056eee5
    MOV ESI,dword ptr [EDX + 0x2b0]     ; 0056eee9
    PUSH EDX                            ; 0056eeef
    CALL dword ptr [ESI + 0x14]         ; 0056eef0
    ADD ESP,0x8                         ; 0056eef3
    MOV ECX,dword ptr [0x01c225d8]      ; 0056eef6 | DAT_01c225d8
    PUSH ECX                            ; 0056eefc
    MOV ESI,dword ptr [EBX + 0x25698]   ; 0056eefd
    PUSH ESI                            ; 0056ef03
    CALL FUN_0040c8f0                   ; 0056ef04
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV ESI,EAX                         ; 0056ef09
    ADD ESP,0x8                         ; 0056ef0b
    TEST EAX,EAX                        ; 0056ef0e
    JZ 0x0056eee1                       ; 0056ef10
        ;   XREF to: 0056eee1 (CONDITIONAL_JUMP)  ; LAB_0056eee1
    PUSH EAX                            ; 0056ef12
    CALL FUN_0047a1c0                   ; 0056ef13
        ;   XREF to: 0047a1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047a1c0()
    ADD ESP,0x4                         ; 0056ef18
    TEST EAX,EAX                        ; 0056ef1b
    JZ 0x0056eee1                       ; 0056ef1d
        ;   XREF to: 0056eee1 (CONDITIONAL_JUMP)  ; LAB_0056eee1
    LEA EAX,[ESI + 0x6d8]               ; 0056ef1f
    MOV dword ptr [EAX + 0x8],0x0       ; 0056ef25
    PUSH ESI                            ; 0056ef2c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056ef2d
    MOV dword ptr [EAX + 0x4],EDX       ; 0056ef30
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056ef33
    MOV dword ptr [EAX],EDX             ; 0056ef36
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0056ef38
    CALL dword ptr [EAX + 0xec]         ; 0056ef3e
    MOV dword ptr [EBX + 0x25698],0x0   ; 0056ef44
    MOV dword ptr [EBX + 0x2d04],0x0    ; 0056ef4e
    FLD float ptr [0x005fc1d4]          ; 0056ef58 | DAT_005fc1d4
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0056ef5e
    ADD ESP,0x4                         ; 0056ef68
    MOV EDI,dword ptr [EBX + 0x256a4]   ; 0056ef6b
    FSTP float ptr [EBX + 0x25650]      ; 0056ef71
    CMP EDI,0x3                         ; 0056ef77
    JNZ 0x0056eee1                      ; 0056ef7a
        ;   XREF to: 0056eee1 (CONDITIONAL_JUMP)  ; LAB_0056eee1
    MOV dword ptr [EBX + 0x256a4],0x0   ; 0056ef80
    POP EDI                             ; 0056ef8a
    POP ESI                             ; 0056ef8b
    POP EBX                             ; 0056ef8c
    RET                                 ; 0056ef8d

