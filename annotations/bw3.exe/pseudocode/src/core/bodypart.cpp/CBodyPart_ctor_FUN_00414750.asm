; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00414750(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bodypart.cpp_createBodyPart_FUN_00414550 at 00414660
;   core_bodypart.cpp_factoryFuncBodyPart_FUN_00414720 at 00414733
;
; Referenced Globals:
;   CDemonActor_vtable g_CBodyPartVTable
;   WatcomTypeInfo g_SBodyPartModelTypeInfo
;   WatcomTypeInfo g_SBodyPartFireTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_box.cpp_CBox_ctor_FUN_0041ad40
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414750
        ;   Label: core_bodypart.cpp_CBodyPart_ctor_FUN_00414750
    PUSH EAX                            ; 00414754
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 00414755
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041475a
    PUSH 0x5dc0c0                       ; 0041475d | g_SBodyPartModelTypeInfo
    PUSH 0x3                            ; 00414762
    ADD EAX,0x290                       ; 00414764
    PUSH EAX                            ; 00414769
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0041476a
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 0041476f
    PUSH 0x5dc0e0                       ; 00414772 | g_SBodyPartFireTypeInfo
    PUSH 0x2                            ; 00414777
    ADD EAX,0x4c0                       ; 00414779
    PUSH EAX                            ; 0041477e
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0041477f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 00414784
    ADD EAX,0x580                       ; 00414787
    PUSH EAX                            ; 0041478c
    CALL core_box.cpp_CBox_ctor_FUN_0041ad40 ; 0041478d
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041ad40(CBox * this_ptr)
    SUB EAX,0xcd0                       ; 00414792
    MOV dword ptr [EAX + 0x154],0x5dbfe4 ; 00414797 | g_CBodyPartVTable
    MOV dword ptr [EAX + 0xf2c],0x0     ; 004147a1
    MOV dword ptr [EAX + 0x174],0x0     ; 004147ab
    MOV dword ptr [EAX + 0x178],0x0     ; 004147b5
    MOV dword ptr [EAX + 0x17c],0x0     ; 004147bf
    MOV dword ptr [EAX + 0x180],0x0     ; 004147c9
    MOV dword ptr [EAX + 0x184],0x0     ; 004147d3
    MOV dword ptr [EAX + 0x188],0x0     ; 004147dd
    MOV dword ptr [EAX + 0x18c],0x0     ; 004147e7
    LEA EDX,[EAX + 0x280]               ; 004147f1
    MOV dword ptr [EAX + 0x158],0x0     ; 004147f7
    MOV dword ptr [EDX + 0x8],0x0       ; 00414801
    MOV ECX,dword ptr [EDX + 0x8]       ; 00414808
    MOV dword ptr [EDX + 0x4],ECX       ; 0041480b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041480e
    MOV dword ptr [EDX],ECX             ; 00414811
    MOV dword ptr [EAX + 0x74c],0x0     ; 00414813
    MOV dword ptr [EAX + 0x28c],0x0     ; 0041481d
    MOV dword ptr [EAX + 0xcbc],0x40a00000 ; 00414827
    MOV dword ptr [EAX + 0xcb8],0x0     ; 00414831
    MOV dword ptr [EAX + 0xcc0],0xffff  ; 0041483b
    MOV dword ptr [EAX + 0xf30],0x0     ; 00414845
    MOV dword ptr [EAX + 0xcc4],0x0     ; 0041484f
    MOV dword ptr [EAX + 0xcc8],0x0     ; 00414859
    ADD ESP,0x4                         ; 00414863
    MOV dword ptr [EAX + 0xccc],0x0     ; 00414866
    RET                                 ; 00414870

