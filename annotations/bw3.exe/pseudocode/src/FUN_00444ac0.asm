; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00444ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_0040f2f0 at 0040f38f
;   FUN_00511340 at 005114b8
;
; Called Functions:
;   FUN_00444b70
;   FUN_00583b10
;   FUN_00585740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444ac0
        ;   Label: FUN_00444ac0
    PUSH ESI                            ; 00444ac1
    PUSH EDI                            ; 00444ac2
    SUB ESP,0x88                        ; 00444ac3
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00444ac9
    LEA EAX,[ESP + 0x60]                ; 00444ad0
    PUSH EAX                            ; 00444ad4
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00444ad5
    PUSH EDX                            ; 00444adc
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00444add
    PUSH dword ptr [ESP + 0xa4]         ; 00444ae4
    PUSH ECX                            ; 00444aeb
    CALL FUN_00444b70                   ; 00444aec
        ;   XREF to: 00444b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00444b70()
    ADD ESP,0x10                        ; 00444af1
    LEA EAX,[ESP + 0x60]                ; 00444af4
    PUSH EAX                            ; 00444af8
    LEA ESI,[ESP + 0x4]                 ; 00444af9
    LEA EDI,[ESP + 0x34]                ; 00444afd
    CALL FUN_00585740                   ; 00444b01
        ;   XREF to: 00585740 (UNCONDITIONAL_CALL)  ; undefined FUN_00585740()
    MOV ECX,0xc                         ; 00444b06
    LEA ESI,[ESP + 0x4]                 ; 00444b0b
    ADD ESP,0x4                         ; 00444b0f
    LEA EAX,[ESP + 0x30]                ; 00444b12
    MOVSD.REP ES:EDI,ESI                ; 00444b16
    PUSH EAX                            ; 00444b18
    LEA ESI,[ESP + 0x74]                ; 00444b19
    LEA EDI,[ESP + 0x80]                ; 00444b1d
    CALL FUN_00583b10                   ; 00444b24
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00583b10()
    LEA ESI,[ESP + 0x74]                ; 00444b29
    ADD ESP,0x4                         ; 00444b2d
    LEA EAX,[ESP + 0x7c]                ; 00444b30
    MOVSD ES:EDI,ESI                    ; 00444b34
    MOVSD ES:EDI,ESI                    ; 00444b35
    MOVSD ES:EDI,ESI                    ; 00444b36
    CMP EBX,EAX                         ; 00444b37
    JNZ 0x00444b45                      ; 00444b39
        ;   XREF to: 00444b45 (CONDITIONAL_JUMP)  ; LAB_00444b45
    ADD ESP,0x88                        ; 00444b3b
    POP EDI                             ; 00444b41
    POP ESI                             ; 00444b42
    POP EBX                             ; 00444b43
    RET                                 ; 00444b44
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00444b45
        ;   Label: LAB_00444b45
    MOV dword ptr [EBX],EAX             ; 00444b49
    MOV EAX,dword ptr [ESP + 0x80]      ; 00444b4b
    MOV dword ptr [EBX + 0x4],EAX       ; 00444b52
    MOV EAX,dword ptr [ESP + 0x84]      ; 00444b55
    MOV dword ptr [EBX + 0x8],EAX       ; 00444b5c
    ADD ESP,0x88                        ; 00444b5f
    POP EDI                             ; 00444b65
    POP ESI                             ; 00444b66
    POP EBX                             ; 00444b67
    RET                                 ; 00444b68

