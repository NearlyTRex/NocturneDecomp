; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0(CDemonSet *this_ptr,int vertex_count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_005b6a50 at 005b6c38
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90 at 00531f0a
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_0083c7d0
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_pushRect_FUN_0043bb10
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00531ca0
        ;   Label: core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0
    SUB ESP,0x1c                        ; 00531ca1
    CMP dword ptr [0x0083c7d0],0x0      ; 00531ca4 | DAT_0083c7d0
    JZ 0x00531e45                       ; 00531cab
        ;   XREF to: 00531e45 (CONDITIONAL_JUMP)  ; LAB_00531e45
    PUSH EDI                            ; 00531cb1
    PUSH ESI                            ; 00531cb2
    PUSH EBX                            ; 00531cb3
    MOV EBX,dword ptr [ESP + 0x34]      ; 00531cb4
    MOV EAX,[0x0060b280]                ; 00531cb8 | DAT_0060b280
    MOV EDI,dword ptr [0x01c35e40]      ; 00531cbd | DAT_01c35e40
    MOV ECX,dword ptr [0x01c35e38]      ; 00531cc3 | DAT_01c35e38
    MOV ESI,dword ptr [EAX]             ; 00531cc9 | DAT_01ba5c50
    MOV EAX,[0x01c35e40]                ; 00531ccb | DAT_01c35e40
    MOV EBP,dword ptr [0x01c35e44]      ; 00531cd0 | DAT_01c35e44
    SUB EAX,ECX                         ; 00531cd6
    MOV EDX,dword ptr [0x01c35e3c]      ; 00531cd8 | DAT_01c35e3c
    MOV dword ptr [ESP + 0x20],EAX      ; 00531cde
    MOV EAX,[0x01c35e3c]                ; 00531ce2 | DAT_01c35e3c
    ADD EDI,ECX                         ; 00531ce7
    SUB EBP,EAX                         ; 00531ce9
    MOV EAX,[0x01c35e44]                ; 00531ceb | DAT_01c35e44
    XOR ECX,ECX                         ; 00531cf0
    ADD EAX,EDX                         ; 00531cf2
    MOV dword ptr [ESP + 0x1c],ECX      ; 00531cf4
    MOV dword ptr [ESP + 0x24],EAX      ; 00531cf8
    TEST EBX,EBX                        ; 00531cfc
    JLE 0x00531e03                      ; 00531cfe
        ;   XREF to: 00531e03 (CONDITIONAL_JUMP)  ; LAB_00531e03
    MOV AH,byte ptr [ESI + 0x13]        ; 00531d04
        ;   Label: LAB_00531d04
    MOV ECX,ESI                         ; 00531d07
    TEST AH,0x80                        ; 00531d09
    JZ 0x00531e4a                       ; 00531d0c
        ;   XREF to: 00531e4a (CONDITIONAL_JUMP)  ; LAB_00531e4a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00531d12
    MOV EBX,dword ptr [ESI]             ; 00531d15
    NEG EAX                             ; 00531d17
    CMP EAX,EBX                         ; 00531d19
    JGE 0x00531d4c                      ; 00531d1b
        ;   XREF to: 00531d4c (CONDITIONAL_JUMP)  ; LAB_00531d4c
    MOV EDX,dword ptr [ESI + 0x8]       ; 00531d1d
    CMP EBX,EDX                         ; 00531d20
    JGE 0x00531d4c                      ; 00531d22
        ;   XREF to: 00531d4c (CONDITIONAL_JUMP)  ; LAB_00531d4c
    MOV EBX,EDX                         ; 00531d24
    MOV EAX,dword ptr [ESI]             ; 00531d26
    MOV EDX,dword ptr [0x01c35e38]      ; 00531d28 | DAT_01c35e38
    IMUL EDX                            ; 00531d2e
    IDIV EBX                            ; 00531d30
    MOV EBX,dword ptr [0x01c35e40]      ; 00531d32 | DAT_01c35e40
    MOV EDX,dword ptr [ESP + 0x20]      ; 00531d38
    ADD EAX,EBX                         ; 00531d3c
    CMP EAX,EDX                         ; 00531d3e
    JLE 0x00531d46                      ; 00531d40
        ;   XREF to: 00531d46 (CONDITIONAL_JUMP)  ; LAB_00531d46
    MOV dword ptr [ESP + 0x20],EAX      ; 00531d42
    CMP EAX,EDI                         ; 00531d46
        ;   Label: LAB_00531d46
    JGE 0x00531d4c                      ; 00531d48
        ;   XREF to: 00531d4c (CONDITIONAL_JUMP)  ; LAB_00531d4c
    MOV EDI,EAX                         ; 00531d4a
    MOV EAX,dword ptr [ECX + 0x8]       ; 00531d4c
        ;   Label: LAB_00531d4c
    MOV EBX,dword ptr [ECX + 0x4]       ; 00531d4f
    NEG EAX                             ; 00531d52
    CMP EAX,EBX                         ; 00531d54
    JGE 0x00531d88                      ; 00531d56
        ;   XREF to: 00531d88 (CONDITIONAL_JUMP)  ; LAB_00531d88
    MOV EDX,dword ptr [ECX + 0x8]       ; 00531d58
    CMP EBX,EDX                         ; 00531d5b
    JGE 0x00531d88                      ; 00531d5d
        ;   XREF to: 00531d88 (CONDITIONAL_JUMP)  ; LAB_00531d88
    MOV EBX,EDX                         ; 00531d5f
    MOV EAX,dword ptr [ECX + 0x4]       ; 00531d61
    MOV EDX,dword ptr [0x01c35e3c]      ; 00531d64 | DAT_01c35e3c
    IMUL EDX                            ; 00531d6a
    IDIV EBX                            ; 00531d6c
    MOV EBX,dword ptr [0x01c35e44]      ; 00531d6e | DAT_01c35e44
    MOV EDX,dword ptr [ESP + 0x24]      ; 00531d74
    ADD EAX,EBX                         ; 00531d78
    CMP EAX,EDX                         ; 00531d7a
    JLE 0x00531d82                      ; 00531d7c
        ;   XREF to: 00531d82 (CONDITIONAL_JUMP)  ; LAB_00531d82
    MOV dword ptr [ESP + 0x24],EAX      ; 00531d7e
    CMP EAX,EBP                         ; 00531d82
        ;   Label: LAB_00531d82
    JGE 0x00531d88                      ; 00531d84
        ;   XREF to: 00531d88 (CONDITIONAL_JUMP)  ; LAB_00531d88
    MOV EBP,EAX                         ; 00531d86
    MOV EBX,dword ptr [ECX + 0x8]       ; 00531d88
        ;   Label: LAB_00531d88
    CMP EBX,dword ptr [ECX]             ; 00531d8b
    JG 0x00531da0                       ; 00531d8d
        ;   XREF to: 00531da0 (CONDITIONAL_JUMP)  ; LAB_00531da0
    MOV EDX,dword ptr [0x01c35e40]      ; 00531d8f | DAT_01c35e40
    MOV EAX,[0x01c35e38]                ; 00531d95 | DAT_01c35e38
    ADD EAX,EDX                         ; 00531d9a
    MOV dword ptr [ESP + 0x20],EAX      ; 00531d9c
    MOV EAX,dword ptr [ECX + 0x8]       ; 00531da0
        ;   Label: LAB_00531da0
    MOV EBX,dword ptr [ECX]             ; 00531da3
    NEG EAX                             ; 00531da5
    CMP EAX,EBX                         ; 00531da7
    JL 0x00531db8                       ; 00531da9
        ;   XREF to: 00531db8 (CONDITIONAL_JUMP)  ; LAB_00531db8
    MOV EAX,[0x01c35e38]                ; 00531dab | DAT_01c35e38
    MOV EDI,dword ptr [0x01c35e40]      ; 00531db0 | DAT_01c35e40
    SUB EDI,EAX                         ; 00531db6
    MOV EDX,dword ptr [ECX + 0x8]       ; 00531db8
        ;   Label: LAB_00531db8
    CMP EDX,dword ptr [ECX + 0x4]       ; 00531dbb
    JG 0x00531dce                       ; 00531dbe
        ;   XREF to: 00531dce (CONDITIONAL_JUMP)  ; LAB_00531dce
    MOV EBX,dword ptr [0x01c35e44]      ; 00531dc0 | DAT_01c35e44
    MOV EBP,dword ptr [0x01c35e3c]      ; 00531dc6 | DAT_01c35e3c
    ADD EBP,EBX                         ; 00531dcc
    MOV EAX,dword ptr [ECX + 0x8]       ; 00531dce
        ;   Label: LAB_00531dce
    MOV EDX,dword ptr [ECX + 0x4]       ; 00531dd1
    NEG EAX                             ; 00531dd4
    CMP EAX,EDX                         ; 00531dd6
    JL 0x00531deb                       ; 00531dd8
        ;   XREF to: 00531deb (CONDITIONAL_JUMP)  ; LAB_00531deb
    MOV ECX,dword ptr [0x01c35e3c]      ; 00531dda | DAT_01c35e3c
    MOV EAX,[0x01c35e44]                ; 00531de0 | DAT_01c35e44
    SUB EAX,ECX                         ; 00531de5
    MOV dword ptr [ESP + 0x24],EAX      ; 00531de7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00531deb
        ;   Label: LAB_00531deb
    MOV EDX,dword ptr [ESP + 0x34]      ; 00531def
    INC EAX                             ; 00531df3
    ADD ESI,0x30                        ; 00531df4
    MOV dword ptr [ESP + 0x1c],EAX      ; 00531df7
    CMP EAX,EDX                         ; 00531dfb
    JL 0x00531d04                       ; 00531dfd
        ;   XREF to: 00531d04 (CONDITIONAL_JUMP)  ; LAB_00531d04
    MOV ECX,dword ptr [ESP + 0x20]      ; 00531e03
        ;   Label: LAB_00531e03
    MOV EBX,dword ptr [ESP + 0x24]      ; 00531e07
    MOV EDX,dword ptr [0x0083c7d0]      ; 00531e0b | DAT_0083c7d0
    SAR EBX,0x10                        ; 00531e11
    SAR EBP,0x10                        ; 00531e14
    PUSH EBX                            ; 00531e17
    SAR ECX,0x10                        ; 00531e18
    PUSH EBP                            ; 00531e1b
    SAR EDI,0x10                        ; 00531e1c
    PUSH ECX                            ; 00531e1f
    MOV dword ptr [ESP + 0x18],EDI      ; 00531e20
    MOV dword ptr [ESP + 0x20],EBP      ; 00531e24
    PUSH EDI                            ; 00531e28
    MOV dword ptr [ESP + 0x30],ECX      ; 00531e29
    MOV dword ptr [ESP + 0x34],EBX      ; 00531e2d
    PUSH EDX                            ; 00531e31
    MOV dword ptr [ESP + 0x24],ECX      ; 00531e32
    MOV dword ptr [ESP + 0x2c],EBX      ; 00531e36
    CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_0043bb10 ; 00531e3a
        ;   XREF to: 0043bb10 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_pushRect_FUN_0043bb10(CDemonCamera * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 00531e3f
    POP EBX                             ; 00531e42
    POP ESI                             ; 00531e43
    POP EDI                             ; 00531e44
    ADD ESP,0x1c                        ; 00531e45
        ;   Label: LAB_00531e45
    POP EBP                             ; 00531e48
    RET                                 ; 00531e49
    MOV EBX,dword ptr [ESI + 0x10]      ; 00531e4a
        ;   Label: LAB_00531e4a
    CMP EDI,EBX                         ; 00531e4d
    JLE 0x00531e53                      ; 00531e4f
        ;   XREF to: 00531e53 (CONDITIONAL_JUMP)  ; LAB_00531e53
    MOV EDI,EBX                         ; 00531e51
    MOV EAX,dword ptr [ESP + 0x20]      ; 00531e53
        ;   Label: LAB_00531e53
    MOV EDX,dword ptr [ECX + 0x10]      ; 00531e57
    CMP EAX,EDX                         ; 00531e5a
    JGE 0x00531e62                      ; 00531e5c
        ;   XREF to: 00531e62 (CONDITIONAL_JUMP)  ; LAB_00531e62
    MOV dword ptr [ESP + 0x20],EDX      ; 00531e5e
    MOV EBX,dword ptr [ECX + 0x14]      ; 00531e62
        ;   Label: LAB_00531e62
    CMP EBP,EBX                         ; 00531e65
    JLE 0x00531e6b                      ; 00531e67
        ;   XREF to: 00531e6b (CONDITIONAL_JUMP)  ; LAB_00531e6b
    MOV EBP,EBX                         ; 00531e69
    MOV EAX,dword ptr [ESP + 0x24]      ; 00531e6b
        ;   Label: LAB_00531e6b
    MOV EDX,dword ptr [ECX + 0x14]      ; 00531e6f
    CMP EAX,EDX                         ; 00531e72
    JGE 0x00531deb                      ; 00531e74
        ;   XREF to: 00531deb (CONDITIONAL_JUMP)  ; LAB_00531deb
    MOV dword ptr [ESP + 0x24],EDX      ; 00531e7a
    JMP 0x00531deb                      ; 00531e7e
        ;   XREF to: 00531deb (UNCONDITIONAL_JUMP)  ; LAB_00531deb

