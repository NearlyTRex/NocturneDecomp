; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_004156e0(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bodypart.cpp_createBodyPart_FUN_004154f0 at 004155f2
;   core_bodypart.cpp_factoryFuncBodyPart_FUN_004156b0 at 004156c3
;
; Referenced Globals:
;   CDemonActor_vtable g_CBodyPartVTable
;   WatcomTypeInfo g_SBodyPartModelTypeInfo
;   WatcomTypeInfo g_SBodyPartFireTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_box.cpp_CBox_ctor_FUN_005b1bc0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004156e0
        ;   Label: core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0
    PUSH EAX                            ; 004156e4
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004156e5
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004156ea
    PUSH 0x5f37b0                       ; 004156ed | g_SBodyPartModelTypeInfo
    PUSH 0x3                            ; 004156f2
    ADD EAX,0x3ec                       ; 004156f4
    PUSH EAX                            ; 004156f9
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004156fa
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 004156ff
    PUSH 0x5f37d0                       ; 00415702 | g_SBodyPartFireTypeInfo
    PUSH 0x2                            ; 00415707
    ADD EAX,0x4c0                       ; 00415709
    PUSH EAX                            ; 0041570e
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0041570f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 00415714
    ADD EAX,0x834                       ; 00415717
    PUSH EAX                            ; 0041571c
    CALL core_box.cpp_CBox_ctor_FUN_005b1bc0 ; 0041571d
        ;   XREF to: 005b1bc0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_005b1bc0(CBox * this_ptr)
    SUB EAX,0x10e0                      ; 00415722
    MOV dword ptr [EAX + 0x2b0],0x5f36c4 ; 00415727 | g_CBodyPartVTable
    MOV dword ptr [EAX + 0x133c],0x0    ; 00415731
    MOV dword ptr [EAX + 0x2d0],0x0     ; 0041573b
    MOV dword ptr [EAX + 0x2d4],0x0     ; 00415745
    MOV dword ptr [EAX + 0x2d8],0x0     ; 0041574f
    MOV dword ptr [EAX + 0x2dc],0x0     ; 00415759
    MOV dword ptr [EAX + 0x2e0],0x0     ; 00415763
    MOV dword ptr [EAX + 0x2e4],0x0     ; 0041576d
    MOV dword ptr [EAX + 0x2e8],0x0     ; 00415777
    LEA EDX,[EAX + 0x3dc]               ; 00415781
    MOV dword ptr [EAX + 0x2b4],0x0     ; 00415787
    MOV dword ptr [EDX + 0x8],0x0       ; 00415791
    MOV ECX,dword ptr [EDX + 0x8]       ; 00415798
    MOV dword ptr [EDX + 0x4],ECX       ; 0041579b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041579e
    MOV dword ptr [EDX],ECX             ; 004157a1
    MOV dword ptr [EAX + 0x8a8],0x0     ; 004157a3
    MOV dword ptr [EAX + 0x3e8],0x0     ; 004157ad
    MOV dword ptr [EAX + 0x10d0],0x40a00000 ; 004157b7
    MOV dword ptr [EAX + 0x10cc],0x0    ; 004157c1
    MOV dword ptr [EAX + 0x10d4],0xffff ; 004157cb
    MOV dword ptr [EAX + 0x1340],0x0    ; 004157d5
    MOV dword ptr [EAX + 0x10d8],0x0    ; 004157df
    ADD ESP,0x4                         ; 004157e9
    MOV dword ptr [EAX + 0x10dc],0x0    ; 004157ec
    RET                                 ; 004157f6

