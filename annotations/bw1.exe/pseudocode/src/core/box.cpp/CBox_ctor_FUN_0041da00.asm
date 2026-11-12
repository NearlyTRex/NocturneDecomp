; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBox * __cdecl core_box_cpp_CBox_ctor_FUN_0041da00(CBox *this_ptr)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00418b40 at 00418b7d
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421ca0 at 00421cc2
;   core_fire.cpp_CStake_ctor_FUN_004b77e0 at 004b77e8
;   core_fire.cpp_CToss_ctor_FUN_004b1c10 at 004b1c26
;   core_simbox.cpp_CSimBox_ctor_FUN_005625a0 at 005625c4
;   core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0 at 005ad4e2
;
; Referenced Globals:
;   WatcomTypeInfo g_SScrapeTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041da00
        ;   Label: core_box.cpp_CBox_ctor_FUN_0041da00
    PUSH 0x5fcdf0                       ; 0041da04 | g_SScrapeTypeInfo
    PUSH 0x8                            ; 0041da09
    ADD EAX,0xb4                        ; 0041da0b
    PUSH EAX                            ; 0041da10
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0041da11
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    SUB EAX,0xb4                        ; 0041da16
    MOV dword ptr [EAX + 0x8],0x0       ; 0041da1b
    FLD float ptr [EAX + 0x8]           ; 0041da22
    LEA EDX,[EAX + 0xc]                 ; 0041da25
    FST float ptr [EAX + 0x4]           ; 0041da28
    FSTP float ptr [EAX]                ; 0041da2b
    MOV dword ptr [EDX + 0x8],0x0       ; 0041da2d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041da34
    MOV dword ptr [EDX + 0x4],ECX       ; 0041da37
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041da3a
    MOV dword ptr [EDX],ECX             ; 0041da3d
    LEA EDX,[EAX + 0xa4]                ; 0041da3f
    MOV dword ptr [EDX + 0x8],0x0       ; 0041da45
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041da4c
    MOV dword ptr [EDX + 0x4],ECX       ; 0041da4f
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041da52
    MOV dword ptr [EDX],ECX             ; 0041da55
    LEA EDX,[EAX + 0x4c]                ; 0041da57
    MOV dword ptr [EAX + 0x94],0x0      ; 0041da5a
    MOV dword ptr [EDX + 0x8],0x0       ; 0041da64
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041da6b
    MOV dword ptr [EDX + 0x4],ECX       ; 0041da6e
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041da71
    MOV dword ptr [EDX],ECX             ; 0041da74
    LEA EDX,[EAX + 0x40]                ; 0041da76
    MOV dword ptr [EDX + 0x8],0x0       ; 0041da79
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041da80
    MOV dword ptr [EDX + 0x4],ECX       ; 0041da83
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041da86
    MOV dword ptr [EDX],ECX             ; 0041da89
    LEA EDX,[EAX + 0x70]                ; 0041da8b
    MOV dword ptr [EDX + 0x8],0x0       ; 0041da8e
    ADD ESP,0xc                         ; 0041da95
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041da98
    MOV dword ptr [EDX + 0x4],ECX       ; 0041da9b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041da9e
    MOV dword ptr [EDX],ECX             ; 0041daa1
    MOV dword ptr [EAX + 0x254],0x0     ; 0041daa3
    RET                                 ; 0041daad

