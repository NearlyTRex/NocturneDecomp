; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBox * __cdecl core_box_cpp_CBox_ctor_FUN_0041ad40(CBox *this_ptr)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00414750 at 0041478d
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0 at 0041f002
;   core_fire.cpp_CStake_ctor_FUN_004a4880 at 004a4888
;   core_fire.cpp_CToss_ctor_FUN_0049ce90 at 0049cea6
;   core_simbox.cpp_CSimBox_ctor_FUN_005471c0 at 005471e4
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 at 0057ad92
;
; Referenced Globals:
;   WatcomTypeInfo g_SScrapeTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041ad40
        ;   Label: core_box.cpp_CBox_ctor_FUN_0041ad40
    PUSH 0x5dc930                       ; 0041ad44 | g_SScrapeTypeInfo
    PUSH 0x8                            ; 0041ad49
    ADD EAX,0xb4                        ; 0041ad4b
    PUSH EAX                            ; 0041ad50
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0041ad51
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    SUB EAX,0xb4                        ; 0041ad56
    MOV dword ptr [EAX + 0x8],0x0       ; 0041ad5b
    FLD float ptr [EAX + 0x8]           ; 0041ad62
    LEA EDX,[EAX + 0xc]                 ; 0041ad65
    FST float ptr [EAX + 0x4]           ; 0041ad68
    FSTP float ptr [EAX]                ; 0041ad6b
    MOV dword ptr [EDX + 0x8],0x0       ; 0041ad6d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041ad74
    MOV dword ptr [EDX + 0x4],ECX       ; 0041ad77
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041ad7a
    MOV dword ptr [EDX],ECX             ; 0041ad7d
    LEA EDX,[EAX + 0xa4]                ; 0041ad7f
    MOV dword ptr [EDX + 0x8],0x0       ; 0041ad85
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041ad8c
    MOV dword ptr [EDX + 0x4],ECX       ; 0041ad8f
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041ad92
    MOV dword ptr [EDX],ECX             ; 0041ad95
    LEA EDX,[EAX + 0x4c]                ; 0041ad97
    MOV dword ptr [EAX + 0x94],0x0      ; 0041ad9a
    MOV dword ptr [EDX + 0x8],0x0       ; 0041ada4
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041adab
    MOV dword ptr [EDX + 0x4],ECX       ; 0041adae
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041adb1
    MOV dword ptr [EDX],ECX             ; 0041adb4
    LEA EDX,[EAX + 0x40]                ; 0041adb6
    MOV dword ptr [EDX + 0x8],0x0       ; 0041adb9
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041adc0
    MOV dword ptr [EDX + 0x4],ECX       ; 0041adc3
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041adc6
    MOV dword ptr [EDX],ECX             ; 0041adc9
    LEA EDX,[EAX + 0x70]                ; 0041adcb
    MOV dword ptr [EDX + 0x8],0x0       ; 0041adce
    ADD ESP,0xc                         ; 0041add5
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041add8
    MOV dword ptr [EDX + 0x4],ECX       ; 0041addb
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041adde
    MOV dword ptr [EDX],ECX             ; 0041ade1
    MOV dword ptr [EAX + 0x254],0x0     ; 0041ade3
    RET                                 ; 0041aded

