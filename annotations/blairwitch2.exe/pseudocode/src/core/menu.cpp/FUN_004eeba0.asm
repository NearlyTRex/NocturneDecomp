; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_FUN_004eeba0(EInputCodeType *key_code_ptr,char *description)
;
; Parameters:
; EInputCodeType * Stack[0x4]:4   key_code_ptr
; char *           Stack[0x8]:4   description
;
; XREF[1]:
;   core_menu.cpp_FUN_004eed60 at 004efebf
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field208_0xd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004eeba0
        ;   Label: core_menu.cpp_FUN_004eeba0
    MOV EAX,[0x00616494]                ; 004eeba4 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0xd0]      ; 004eeba9 | g_CGameInstance.field208_0xd0
    TEST ECX,ECX                        ; 004eebaf
    JNZ 0x004eec1a                      ; 004eebb1
        ;   XREF to: 004eec1a (CONDITIONAL_JUMP)  ; LAB_004eec1a
    MOV EAX,dword ptr [EDX]             ; 004eebb7
    CMP EAX,0x209                       ; 004eebb9
    JNC 0x004eebdb                      ; 004eebbe
        ;   XREF to: 004eebdb (CONDITIONAL_JUMP)  ; LAB_004eebdb
    CMP EAX,0x204                       ; 004eebc0
    JNC 0x004eebd5                      ; 004eebc5
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x201                       ; 004eebc7
    JNC 0x004eebd5                      ; 004eebcc
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x200                       ; 004eebce
    JNZ 0x004eebfb                      ; 004eebd3
        ;   XREF to: 004eebfb (CONDITIONAL_JUMP)  ; LAB_004eebfb
    MOV EAX,0x1                         ; 004eebd5
        ;   Label: LAB_004eebd5
    RET                                 ; 004eebda
    JBE 0x004eebd5                      ; 004eebdb
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
        ;   Label: LAB_004eebdb
    CMP EAX,0x252                       ; 004eebdd
    JNC 0x004eebfe                      ; 004eebe2
        ;   XREF to: 004eebfe (CONDITIONAL_JUMP)  ; LAB_004eebfe
    CMP EAX,0x20b                       ; 004eebe4
    JC 0x004eebd5                       ; 004eebe9
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    JBE 0x004eebd5                      ; 004eebeb
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x20c                       ; 004eebed
    JBE 0x004eebd5                      ; 004eebf2
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x251                       ; 004eebf4
    JZ 0x004eebd5                       ; 004eebf9
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    XOR EAX,EAX                         ; 004eebfb
        ;   Label: LAB_004eebfb
    RET                                 ; 004eebfd
    JBE 0x004eebd5                      ; 004eebfe
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
        ;   Label: LAB_004eebfe
    CMP EAX,0x254                       ; 004eec00
    JC 0x004eebd5                       ; 004eec05
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    JBE 0x004eebd5                      ; 004eec07
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x255                       ; 004eec09
    JBE 0x004eebd5                      ; 004eec0e
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x256                       ; 004eec10
    JZ 0x004eebd5                       ; 004eec15
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    XOR EAX,EAX                         ; 004eec17
    RET                                 ; 004eec19
    CMP ECX,0x1                         ; 004eec1a
        ;   Label: LAB_004eec1a
    JNZ 0x004eec85                      ; 004eec1d
        ;   XREF to: 004eec85 (CONDITIONAL_JUMP)  ; LAB_004eec85
    MOV EAX,dword ptr [EDX]             ; 004eec23
    CMP EAX,0x208                       ; 004eec25
    JNC 0x004eec40                      ; 004eec2a
        ;   XREF to: 004eec40 (CONDITIONAL_JUMP)  ; LAB_004eec40
    CMP EAX,0x204                       ; 004eec2c
    JNC 0x004eebd5                      ; 004eec31
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x202                       ; 004eec33
    JC 0x004eebfb                       ; 004eec38
        ;   XREF to: 004eebfb (CONDITIONAL_JUMP)  ; LAB_004eebfb
    MOV EAX,0x1                         ; 004eec3a
    RET                                 ; 004eec3f
    JBE 0x004eebd5                      ; 004eec40
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
        ;   Label: LAB_004eec40
    CMP EAX,0x251                       ; 004eec42
    JNC 0x004eec60                      ; 004eec47
        ;   XREF to: 004eec60 (CONDITIONAL_JUMP)  ; LAB_004eec60
    CMP EAX,0x20a                       ; 004eec49
    JC 0x004eebd5                       ; 004eec4e
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    JBE 0x004eebd5                      ; 004eec50
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x20b                       ; 004eec52
    JZ 0x004eebd5                       ; 004eec57
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    XOR EAX,EAX                         ; 004eec5d
    RET                                 ; 004eec5f
    JBE 0x004eebd5                      ; 004eec60
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
        ;   Label: LAB_004eec60
    CMP EAX,0x253                       ; 004eec66
    JC 0x004eebd5                       ; 004eec6b
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    JBE 0x004eebd5                      ; 004eec71
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x254                       ; 004eec77
    JZ 0x004eebd5                       ; 004eec7c
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    XOR EAX,EAX                         ; 004eec82
    RET                                 ; 004eec84
    CMP ECX,0x2                         ; 004eec85
        ;   Label: LAB_004eec85
    JNZ 0x004eebfb                      ; 004eec88
        ;   XREF to: 004eebfb (CONDITIONAL_JUMP)  ; LAB_004eebfb
    MOV EAX,dword ptr [EDX]             ; 004eec8e
    CMP EAX,0x20c                       ; 004eec90
    JNC 0x004eecb9                      ; 004eec95
        ;   XREF to: 004eecb9 (CONDITIONAL_JUMP)  ; LAB_004eecb9
    CMP EAX,0x200                       ; 004eec97
    JC 0x004eebfb                       ; 004eec9c
        ;   XREF to: 004eebfb (CONDITIONAL_JUMP)  ; LAB_004eebfb
    JBE 0x004eebd5                      ; 004eeca2
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x201                       ; 004eeca8
    JNZ 0x004eebfb                      ; 004eecad
        ;   XREF to: 004eebfb (CONDITIONAL_JUMP)  ; LAB_004eebfb
    MOV EAX,0x1                         ; 004eecb3
    RET                                 ; 004eecb8
    JBE 0x004eebd5                      ; 004eecb9
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
        ;   Label: LAB_004eecb9
    CMP EAX,0x255                       ; 004eecbf
    JC 0x004eebfb                       ; 004eecc4
        ;   XREF to: 004eebfb (CONDITIONAL_JUMP)  ; LAB_004eebfb
    JBE 0x004eebd5                      ; 004eecca
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    CMP EAX,0x256                       ; 004eecd0
    JZ 0x004eebd5                       ; 004eecd5
        ;   XREF to: 004eebd5 (CONDITIONAL_JUMP)  ; LAB_004eebd5
    XOR EAX,EAX                         ; 004eecdb
    RET                                 ; 004eecdd

