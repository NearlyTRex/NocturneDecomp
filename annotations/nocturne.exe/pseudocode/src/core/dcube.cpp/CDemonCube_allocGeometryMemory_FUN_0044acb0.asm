; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0(int *param_1)
;
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_load_FUN_0044aed0 at 0044af93
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_0057bc3b
;   TerminatedCString s_CDemonCube_allocMemory_O_0057bc4d
;   TerminatedCString s_core_dcube_cpp_0057bc7c
;   TerminatedCString s_CDemonCube_allocMemory_O_0057bc8e
;   TerminatedCString s_core_dcube_cpp_0057bcba
;   TerminatedCString s_CDemonCube_allocMemory_O_0057bccc
;   TerminatedCString s_core_dcube_cpp_0057bd00
;   TerminatedCString s_CDemonCube_allocMemory_O_0057bd12
;   TerminatedCString s_core_dcube_cpp_0057bd40
;   TerminatedCString s_CDemonCube_allocMemory_O_0057bd52
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044acb0
        ;   Label: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0
    PUSH ESI                            ; 0044acb1
    PUSH EBP                            ; 0044acb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044acb3
    MOV ESI,dword ptr [EBX + 0x20]      ; 0044acb7
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044acba
    SUB EAX,ESI                         ; 0044acc1
    SHL EAX,0x2                         ; 0044acc3
    ADD EAX,0x4                         ; 0044acc6
    PUSH EAX                            ; 0044acc9
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 0044acca
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    ADD ESP,0x4                         ; 0044accf
    TEST EAX,EAX                        ; 0044acd2
    JNZ 0x0044adbb                      ; 0044acd4
        ;   XREF to: 0044adbb (CONDITIONAL_JUMP)  ; LAB_0044adbb
    MOV dword ptr [EBX + 0x24],EAX      ; 0044acda
        ;   Label: LAB_0044acda
    TEST EAX,EAX                        ; 0044acdd
    JNZ 0x0044ad04                      ; 0044acdf
        ;   XREF to: 0044ad04 (CONDITIONAL_JUMP)  ; LAB_0044ad04
    MOV ECX,0x57bc3b                    ; 0044ace1 | = "..\\core\\dcube.cpp"
    MOV ESI,0x600                       ; 0044ace6
    PUSH 0x57bc4d                       ; 0044aceb | = "CDemonCube::allocMemory - Out of vert..."
    MOV dword ptr [0x01cc4800],ECX      ; 0044acf0 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044acf6 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044acfc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044ad01
    MOV EAX,dword ptr [EBX + 0x28]      ; 0044ad04
        ;   Label: LAB_0044ad04
    SHL EAX,0x5                         ; 0044ad07
    PUSH EAX                            ; 0044ad0a
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 0044ad0b
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    ADD ESP,0x4                         ; 0044ad10
    MOV dword ptr [EBX + 0x2c],EAX      ; 0044ad13
    TEST EAX,EAX                        ; 0044ad16
    JNZ 0x0044ad3c                      ; 0044ad18
        ;   XREF to: 0044ad3c (CONDITIONAL_JUMP)  ; LAB_0044ad3c
    MOV EBP,0x57bc7c                    ; 0044ad1a | = "..\\core\\dcube.cpp"
    MOV EAX,0x602                       ; 0044ad1f
    PUSH 0x57bc8e                       ; 0044ad24 | = "CDemonCube::allocMemory - Out of tri ..."
    MOV dword ptr [0x01cc4800],EBP      ; 0044ad29 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0044ad2f | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044ad34
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044ad39
    MOV EDX,dword ptr [EBX + 0x28]      ; 0044ad3c
        ;   Label: LAB_0044ad3c
    PUSH EDX                            ; 0044ad3f
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0044ad40
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 0044ad45
    MOV dword ptr [EBX + 0x30],EAX      ; 0044ad48
    TEST EAX,EAX                        ; 0044ad4b
    JNZ 0x0044ad74                      ; 0044ad4d
        ;   XREF to: 0044ad74 (CONDITIONAL_JUMP)  ; LAB_0044ad74
    PUSH EDI                            ; 0044ad4f
    MOV ESI,0x57bcba                    ; 0044ad50 | = "..\\core\\dcube.cpp"
    MOV EDI,0x604                       ; 0044ad55
    PUSH 0x57bccc                       ; 0044ad5a | = "CDemonCube::allocMemory - Out of grou..."
    MOV dword ptr [0x01cc4800],ESI      ; 0044ad5f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0044ad65 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044ad6b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044ad70
    POP EDI                             ; 0044ad73
    PUSH 0x40                           ; 0044ad74
        ;   Label: LAB_0044ad74
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0044ad76
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 0044ad7b
    MOV dword ptr [EBX],EAX             ; 0044ad7e
    TEST EAX,EAX                        ; 0044ad80
    JNZ 0x0044ada6                      ; 0044ad82
        ;   XREF to: 0044ada6 (CONDITIONAL_JUMP)  ; LAB_0044ada6
    MOV EAX,0x57bd00                    ; 0044ad84 | = "..\\core\\dcube.cpp"
    MOV EDX,0x606                       ; 0044ad89
    PUSH 0x57bd12                       ; 0044ad8e | = "CDemonCube::allocMemory - Out of voxe..."
    MOV [0x01cc4800],EAX                ; 0044ad93 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0044ad98 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044ad9e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044ada3
    PUSH 0x40                           ; 0044ada6
        ;   Label: LAB_0044ada6
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0044ada8
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 0044adad
    MOV dword ptr [EBX + 0x4],EAX       ; 0044adb0
    TEST EAX,EAX                        ; 0044adb3
    JZ 0x0044adc6                       ; 0044adb5
        ;   XREF to: 0044adc6 (CONDITIONAL_JUMP)  ; LAB_0044adc6
    POP EBP                             ; 0044adb7
    POP ESI                             ; 0044adb8
    POP EBX                             ; 0044adb9
    RET                                 ; 0044adba
    ADD EAX,0x4                         ; 0044adbb
        ;   Label: LAB_0044adbb
    MOV dword ptr [EAX + -0x4],ESI      ; 0044adbe
    JMP 0x0044acda                      ; 0044adc1
        ;   XREF to: 0044acda (UNCONDITIONAL_JUMP)  ; LAB_0044acda
    MOV EBX,0x57bd40                    ; 0044adc6 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_0044adc6
    MOV ESI,0x608                       ; 0044adcb
    PUSH 0x57bd52                       ; 0044add0 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01cc4800],EBX      ; 0044add5 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044addb | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044ade1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044ade6
    POP EBP                             ; 0044ade9
    POP ESI                             ; 0044adea
    POP EBX                             ; 0044adeb
    RET                                 ; 0044adec

