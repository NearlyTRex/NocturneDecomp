; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004eacb0(uint *param_1)
;
;
; XREF[1]:
;   FUN_004eae80 at 004ec30a
;
; Referenced Globals:
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d213e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004eacb0
        ;   Label: FUN_004eacb0
    MOV EAX,[0x005fe9dc]                ; 004eacb4 | DAT_005fe9dc
    MOV ECX,dword ptr [EAX + 0xd4]      ; 004eacb9 | DAT_01d213e0
    TEST ECX,ECX                        ; 004eacbf
    JNZ 0x004ead2a                      ; 004eacc1
        ;   XREF to: 004ead2a (CONDITIONAL_JUMP)  ; LAB_004ead2a
    MOV EAX,dword ptr [EDX]             ; 004eacc7
    CMP EAX,0x209                       ; 004eacc9
    JNC 0x004eaceb                      ; 004eacce
        ;   XREF to: 004eaceb (CONDITIONAL_JUMP)  ; LAB_004eaceb
    CMP EAX,0x204                       ; 004eacd0
    JNC 0x004eace5                      ; 004eacd5
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x201                       ; 004eacd7
    JNC 0x004eace5                      ; 004eacdc
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x200                       ; 004eacde
    JNZ 0x004ead0b                      ; 004eace3
        ;   XREF to: 004ead0b (CONDITIONAL_JUMP)  ; LAB_004ead0b
    MOV EAX,0x1                         ; 004eace5
        ;   Label: LAB_004eace5
    RET                                 ; 004eacea
    JBE 0x004eace5                      ; 004eaceb
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
        ;   Label: LAB_004eaceb
    CMP EAX,0x252                       ; 004eaced
    JNC 0x004ead0e                      ; 004eacf2
        ;   XREF to: 004ead0e (CONDITIONAL_JUMP)  ; LAB_004ead0e
    CMP EAX,0x20b                       ; 004eacf4
    JC 0x004eace5                       ; 004eacf9
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    JBE 0x004eace5                      ; 004eacfb
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x20c                       ; 004eacfd
    JBE 0x004eace5                      ; 004ead02
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x251                       ; 004ead04
    JZ 0x004eace5                       ; 004ead09
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    XOR EAX,EAX                         ; 004ead0b
        ;   Label: LAB_004ead0b
    RET                                 ; 004ead0d
    JBE 0x004eace5                      ; 004ead0e
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
        ;   Label: LAB_004ead0e
    CMP EAX,0x254                       ; 004ead10
    JC 0x004eace5                       ; 004ead15
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    JBE 0x004eace5                      ; 004ead17
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x255                       ; 004ead19
    JBE 0x004eace5                      ; 004ead1e
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x256                       ; 004ead20
    JZ 0x004eace5                       ; 004ead25
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    XOR EAX,EAX                         ; 004ead27
    RET                                 ; 004ead29
    CMP ECX,0x1                         ; 004ead2a
        ;   Label: LAB_004ead2a
    JNZ 0x004ead95                      ; 004ead2d
        ;   XREF to: 004ead95 (CONDITIONAL_JUMP)  ; LAB_004ead95
    MOV EAX,dword ptr [EDX]             ; 004ead33
    CMP EAX,0x208                       ; 004ead35
    JNC 0x004ead50                      ; 004ead3a
        ;   XREF to: 004ead50 (CONDITIONAL_JUMP)  ; LAB_004ead50
    CMP EAX,0x204                       ; 004ead3c
    JNC 0x004eace5                      ; 004ead41
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x202                       ; 004ead43
    JC 0x004ead0b                       ; 004ead48
        ;   XREF to: 004ead0b (CONDITIONAL_JUMP)  ; LAB_004ead0b
    MOV EAX,0x1                         ; 004ead4a
    RET                                 ; 004ead4f
    JBE 0x004eace5                      ; 004ead50
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
        ;   Label: LAB_004ead50
    CMP EAX,0x251                       ; 004ead52
    JNC 0x004ead70                      ; 004ead57
        ;   XREF to: 004ead70 (CONDITIONAL_JUMP)  ; LAB_004ead70
    CMP EAX,0x20a                       ; 004ead59
    JC 0x004eace5                       ; 004ead5e
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    JBE 0x004eace5                      ; 004ead60
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x20b                       ; 004ead62
    JZ 0x004eace5                       ; 004ead67
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    XOR EAX,EAX                         ; 004ead6d
    RET                                 ; 004ead6f
    JBE 0x004eace5                      ; 004ead70
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
        ;   Label: LAB_004ead70
    CMP EAX,0x253                       ; 004ead76
    JC 0x004eace5                       ; 004ead7b
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    JBE 0x004eace5                      ; 004ead81
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x254                       ; 004ead87
    JZ 0x004eace5                       ; 004ead8c
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    XOR EAX,EAX                         ; 004ead92
    RET                                 ; 004ead94
    CMP ECX,0x2                         ; 004ead95
        ;   Label: LAB_004ead95
    JNZ 0x004ead0b                      ; 004ead98
        ;   XREF to: 004ead0b (CONDITIONAL_JUMP)  ; LAB_004ead0b
    MOV EAX,dword ptr [EDX]             ; 004ead9e
    CMP EAX,0x20c                       ; 004eada0
    JNC 0x004eadc9                      ; 004eada5
        ;   XREF to: 004eadc9 (CONDITIONAL_JUMP)  ; LAB_004eadc9
    CMP EAX,0x200                       ; 004eada7
    JC 0x004ead0b                       ; 004eadac
        ;   XREF to: 004ead0b (CONDITIONAL_JUMP)  ; LAB_004ead0b
    JBE 0x004eace5                      ; 004eadb2
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x201                       ; 004eadb8
    JNZ 0x004ead0b                      ; 004eadbd
        ;   XREF to: 004ead0b (CONDITIONAL_JUMP)  ; LAB_004ead0b
    MOV EAX,0x1                         ; 004eadc3
    RET                                 ; 004eadc8
    JBE 0x004eace5                      ; 004eadc9
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
        ;   Label: LAB_004eadc9
    CMP EAX,0x255                       ; 004eadcf
    JC 0x004ead0b                       ; 004eadd4
        ;   XREF to: 004ead0b (CONDITIONAL_JUMP)  ; LAB_004ead0b
    JBE 0x004eace5                      ; 004eadda
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    CMP EAX,0x256                       ; 004eade0
    JZ 0x004eace5                       ; 004eade5
        ;   XREF to: 004eace5 (CONDITIONAL_JUMP)  ; LAB_004eace5
    XOR EAX,EAX                         ; 004eadeb
    RET                                 ; 004eaded

