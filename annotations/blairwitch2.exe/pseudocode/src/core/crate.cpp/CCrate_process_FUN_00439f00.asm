; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_process_FUN_00439f00(CCrate *this_ptr,float delta_time)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439f00
        ;   Label: core_crate.cpp_CCrate_process_FUN_00439f00
    SUB ESP,0x38                        ; 00439f01
    MOV EBX,dword ptr [ESP + 0x40]      ; 00439f04
    CMP dword ptr [EBX + 0x430],0x0     ; 00439f08
    JNZ 0x0043a0af                      ; 00439f0f
        ;   XREF to: 0043a0af (CONDITIONAL_JUMP)  ; LAB_0043a0af
    LEA EDX,[EBX + 0x20]                ; 00439f15
    LEA EAX,[EBX + 0xe0]                ; 00439f18
    FLD float ptr [EAX]                 ; 00439f1e
    FADD float ptr [EDX]                ; 00439f20
    FSTP float ptr [EDX]                ; 00439f22
    FLD float ptr [EAX + 0x4]           ; 00439f24
    FADD float ptr [EDX + 0x4]          ; 00439f27
    FSTP float ptr [EDX + 0x4]          ; 00439f2a
    FLD float ptr [EAX + 0x8]           ; 00439f2d
    FADD float ptr [EDX + 0x8]          ; 00439f30
    FSTP float ptr [EDX + 0x8]          ; 00439f33
    MOV dword ptr [EAX + 0x8],0x0       ; 00439f36
    LEA EDX,[EBX + 0x30]                ; 00439f3d
    MOV ECX,dword ptr [EAX + 0x8]       ; 00439f40
    MOV dword ptr [EAX + 0x4],ECX       ; 00439f43
    MOV ECX,dword ptr [EAX + 0x4]       ; 00439f46
    MOV dword ptr [EAX],ECX             ; 00439f49
    LEA EAX,[EBX + 0xec]                ; 00439f4b
    FLD float ptr [EAX]                 ; 00439f51
    FADD float ptr [EDX]                ; 00439f53
    FSTP float ptr [EDX]                ; 00439f55
    FLD float ptr [EAX + 0x4]           ; 00439f57
    FADD float ptr [EDX + 0x4]          ; 00439f5a
    FSTP float ptr [EDX + 0x4]          ; 00439f5d
    FLD float ptr [EAX + 0x8]           ; 00439f60
    FADD float ptr [EDX + 0x8]          ; 00439f63
    FSTP float ptr [EDX + 0x8]          ; 00439f66
    MOV dword ptr [EAX + 0x8],0x0       ; 00439f69
    MOV EDX,dword ptr [EAX + 0x8]       ; 00439f70
    MOV dword ptr [EAX + 0x4],EDX       ; 00439f73
    MOV EDX,dword ptr [EAX + 0x4]       ; 00439f76
    MOV dword ptr [EAX],EDX             ; 00439f79
    FLD float ptr [EBX + 0x43c]         ; 00439f7b
    FCOMP float ptr [EBX + 0x20]        ; 00439f81
    FNSTSW AX                           ; 00439f84
    SAHF                                ; 00439f86
    JNZ 0x00439f9b                      ; 00439f87
        ;   XREF to: 00439f9b (CONDITIONAL_JUMP)  ; LAB_00439f9b
    FLD float ptr [EBX + 0x440]         ; 00439f89
    FCOMP float ptr [EBX + 0x24]        ; 00439f8f
    FNSTSW AX                           ; 00439f92
    SAHF                                ; 00439f94
    JZ 0x0043a0be                       ; 00439f95
        ;   XREF to: 0043a0be (CONDITIONAL_JUMP)  ; LAB_0043a0be
    PUSH 0x0                            ; 00439f9b
        ;   Label: LAB_00439f9b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00439f9d
    PUSH dword ptr [EBX + 0x434]        ; 00439fa3
    PUSH EBX                            ; 00439fa9
    CALL dword ptr [EAX + 0x48]         ; 00439faa
    MOV dword ptr [ESP + 0x40],EAX      ; 00439fad
    FLD float ptr [ESP + 0x40]          ; 00439fb1
    LEA EAX,[EBX + 0x43c]               ; 00439fb5
    ADD ESP,0xc                         ; 00439fbb
    LEA EDX,[EBX + 0x20]                ; 00439fbe
    FSTP float ptr [ESP + 0x30]         ; 00439fc1
    CMP EAX,EDX                         ; 00439fc5
    JZ 0x00439fd9                       ; 00439fc7
        ;   XREF to: 00439fd9 (CONDITIONAL_JUMP)  ; LAB_00439fd9
    MOV ECX,dword ptr [EDX]             ; 00439fc9
    MOV dword ptr [EAX],ECX             ; 00439fcb
    MOV ECX,dword ptr [EDX + 0x4]       ; 00439fcd
    MOV dword ptr [EAX + 0x4],ECX       ; 00439fd0
    MOV ECX,dword ptr [EDX + 0x8]       ; 00439fd3
    MOV dword ptr [EAX + 0x8],ECX       ; 00439fd6
    LEA EAX,[EBX + 0x448]               ; 00439fd9
        ;   Label: LAB_00439fd9
    LEA EDX,[EBX + 0x30]                ; 00439fdf
    CMP EAX,EDX                         ; 00439fe2
    JZ 0x00439ff6                       ; 00439fe4
        ;   XREF to: 00439ff6 (CONDITIONAL_JUMP)  ; LAB_00439ff6
    MOV ECX,dword ptr [EDX]             ; 00439fe6
    MOV dword ptr [EAX],ECX             ; 00439fe8
    MOV ECX,dword ptr [EDX + 0x4]       ; 00439fea
    MOV dword ptr [EAX + 0x4],ECX       ; 00439fed
    MOV ECX,dword ptr [EDX + 0x8]       ; 00439ff0
    MOV dword ptr [EAX + 0x8],ECX       ; 00439ff3
    MOV EAX,dword ptr [ESP + 0x30]      ; 00439ff6
        ;   Label: LAB_00439ff6
    MOV dword ptr [EBX + 0x454],EAX     ; 00439ffa
    PUSH EDI                            ; 0043a000
        ;   Label: LAB_0043a000
    PUSH ESI                            ; 0043a001
    CMP dword ptr [EBX + 0x438],0x0     ; 0043a002
    JNZ 0x0043a01b                      ; 0043a009
        ;   XREF to: 0043a01b (CONDITIONAL_JUMP)  ; LAB_0043a01b
    MOV ESI,dword ptr [EBX + 0xdc]      ; 0043a00b
    TEST ESI,ESI                        ; 0043a011
    JZ 0x0043a01b                       ; 0043a013
        ;   XREF to: 0043a01b (CONDITIONAL_JUMP)  ; LAB_0043a01b
    MOV dword ptr [EBX + 0x438],ESI     ; 0043a015
    MOV EDI,dword ptr [EBX + 0x438]     ; 0043a01b
        ;   Label: LAB_0043a01b
    TEST EDI,EDI                        ; 0043a021
    JZ 0x0043a115                       ; 0043a023
        ;   XREF to: 0043a115 (CONDITIONAL_JUMP)  ; LAB_0043a115
    MOV EAX,EDI                         ; 0043a029
    MOV dword ptr [EBX + 0xdc],EDI      ; 0043a02b
    LEA EDX,[EBX + 0x20]                ; 0043a031
    MOV ECX,dword ptr [EAX + 0x20]      ; 0043a034
    MOV dword ptr [EDX],ECX             ; 0043a037
    MOV ECX,dword ptr [EAX + 0x24]      ; 0043a039
    MOV dword ptr [EDX + 0x4],ECX       ; 0043a03c
    MOV ECX,dword ptr [EAX + 0x28]      ; 0043a03f
    MOV dword ptr [EDX + 0x8],ECX       ; 0043a042
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043a045
    MOV dword ptr [EDX + 0xc],EAX       ; 0043a048
    MOV EDX,dword ptr [EBX + 0xdc]      ; 0043a04b
    LEA EAX,[EBX + 0x30]                ; 0043a051
    ADD EDX,0x30                        ; 0043a054
    CMP EAX,EDX                         ; 0043a057
    JZ 0x0043a06b                       ; 0043a059
        ;   XREF to: 0043a06b (CONDITIONAL_JUMP)  ; LAB_0043a06b
    MOV ECX,dword ptr [EDX]             ; 0043a05b
    MOV dword ptr [EAX],ECX             ; 0043a05d
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043a05f
    MOV dword ptr [EAX + 0x4],ECX       ; 0043a062
    MOV ECX,dword ptr [EDX + 0x8]       ; 0043a065
    MOV dword ptr [EAX + 0x8],ECX       ; 0043a068
    MOV EAX,dword ptr [EBX + 0xdc]      ; 0043a06b
        ;   Label: LAB_0043a06b
    PUSH EAX                            ; 0043a071
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0043a072
    LEA ESI,[ESP + 0xc]                 ; 0043a078
    LEA EDI,[ESP + 0x24]                ; 0043a07c
    CALL dword ptr [EDX + 0x24]         ; 0043a080
    MOV ECX,0x6                         ; 0043a083
    LEA ESI,[ESP + 0xc]                 ; 0043a088
    ADD ESP,0x4                         ; 0043a08c
    MOVSD.REP ES:EDI,ESI                ; 0043a08f
    FLD float ptr [ESP + 0x30]          ; 0043a091
    FSUB float ptr [ESP + 0x24]         ; 0043a095
    FADD float ptr [EBX + 0x24]         ; 0043a099
    FSTP float ptr [EBX + 0x24]         ; 0043a09c
    PUSH EBX                            ; 0043a09f
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0043a0a0
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043a0a5
    POP ESI                             ; 0043a0a8
    POP EDI                             ; 0043a0a9
    ADD ESP,0x38                        ; 0043a0aa
    POP EBX                             ; 0043a0ad
    RET                                 ; 0043a0ae
    MOV dword ptr [EBX + 0x438],0x0     ; 0043a0af
        ;   Label: LAB_0043a0af
    ADD ESP,0x38                        ; 0043a0b9
    POP EBX                             ; 0043a0bc
    RET                                 ; 0043a0bd
    FLD float ptr [EBX + 0x444]         ; 0043a0be
        ;   Label: LAB_0043a0be
    FCOMP float ptr [EBX + 0x28]        ; 0043a0c4
    FNSTSW AX                           ; 0043a0c7
    SAHF                                ; 0043a0c9
    JNZ 0x00439f9b                      ; 0043a0ca
        ;   XREF to: 00439f9b (CONDITIONAL_JUMP)  ; LAB_00439f9b
    FLD float ptr [EBX + 0x448]         ; 0043a0d0
    FCOMP float ptr [EBX + 0x30]        ; 0043a0d6
    FNSTSW AX                           ; 0043a0d9
    SAHF                                ; 0043a0db
    JNZ 0x00439f9b                      ; 0043a0dc
        ;   XREF to: 00439f9b (CONDITIONAL_JUMP)  ; LAB_00439f9b
    FLD float ptr [EBX + 0x44c]         ; 0043a0e2
    FCOMP float ptr [EBX + 0x34]        ; 0043a0e8
    FNSTSW AX                           ; 0043a0eb
    SAHF                                ; 0043a0ed
    JNZ 0x00439f9b                      ; 0043a0ee
        ;   XREF to: 00439f9b (CONDITIONAL_JUMP)  ; LAB_00439f9b
    FLD float ptr [EBX + 0x450]         ; 0043a0f4
    FCOMP float ptr [EBX + 0x38]        ; 0043a0fa
    FNSTSW AX                           ; 0043a0fd
    SAHF                                ; 0043a0ff
    JNZ 0x00439f9b                      ; 0043a100
        ;   XREF to: 00439f9b (CONDITIONAL_JUMP)  ; LAB_00439f9b
    MOV EAX,dword ptr [EBX + 0x454]     ; 0043a106
    MOV dword ptr [ESP + 0x30],EAX      ; 0043a10c
    JMP 0x0043a000                      ; 0043a110
        ;   XREF to: 0043a000 (UNCONDITIONAL_JUMP)  ; LAB_0043a000
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043a115
        ;   Label: LAB_0043a115
    MOV dword ptr [EBX + 0x24],EAX      ; 0043a119
    PUSH EBX                            ; 0043a11c
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0043a11d
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043a122
    POP ESI                             ; 0043a125
    POP EDI                             ; 0043a126
    ADD ESP,0x38                        ; 0043a127
    POP EBX                             ; 0043a12a
    RET                                 ; 0043a12b

