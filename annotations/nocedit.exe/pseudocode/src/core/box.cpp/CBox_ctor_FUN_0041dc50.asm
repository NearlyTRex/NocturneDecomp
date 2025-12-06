; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBox * core_box.cpp_CBox_ctor_FUN_0041dc50(CBox * this_ptr)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00419010 at 0041904d
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 at 00421722
;   core_fire.cpp_CStake_ctor_FUN_004c9740 at 004c9748
;   core_fire.cpp_CToss_ctor_FUN_004c3ea0 at 004c3eb6
;   core_simbox.cpp_CSimBox_ctor_FUN_00588d40 at 00588d64
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70 at 005ede92
;
; Referenced Globals:
;   WatcomTypeInfo g_SScrapeTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041dc50
        ;   Label: core_box.cpp_CBox_ctor_FUN_0041dc50
    PUSH 0x65b140                       ; 0041dc54 | WatcomTypeInfo g_SScrapeTypeInfo
    PUSH 0x8                            ; 0041dc59
    ADD EAX,0xb4                        ; 0041dc5b
    PUSH EAX                            ; 0041dc60
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0041dc61 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    SUB EAX,0xb4                        ; 0041dc66
    MOV dword ptr [EAX + 0x8],0x0       ; 0041dc6b
    FLD float ptr [EAX + 0x8]           ; 0041dc72
    LEA EDX,[EAX + 0xc]                 ; 0041dc75
    FST float ptr [EAX + 0x4]           ; 0041dc78
    FSTP float ptr [EAX]                ; 0041dc7b
    MOV dword ptr [EDX + 0x8],0x0       ; 0041dc7d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041dc84
    MOV dword ptr [EDX + 0x4],ECX       ; 0041dc87
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041dc8a
    MOV dword ptr [EDX],ECX             ; 0041dc8d
    LEA EDX,[EAX + 0xa4]                ; 0041dc8f
    MOV dword ptr [EDX + 0x8],0x0       ; 0041dc95
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041dc9c
    MOV dword ptr [EDX + 0x4],ECX       ; 0041dc9f
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041dca2
    MOV dword ptr [EDX],ECX             ; 0041dca5
    LEA EDX,[EAX + 0x4c]                ; 0041dca7
    MOV dword ptr [EAX + 0x94],0x0      ; 0041dcaa
    MOV dword ptr [EDX + 0x8],0x0       ; 0041dcb4
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041dcbb
    MOV dword ptr [EDX + 0x4],ECX       ; 0041dcbe
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041dcc1
    MOV dword ptr [EDX],ECX             ; 0041dcc4
    LEA EDX,[EAX + 0x40]                ; 0041dcc6
    MOV dword ptr [EDX + 0x8],0x0       ; 0041dcc9
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041dcd0
    MOV dword ptr [EDX + 0x4],ECX       ; 0041dcd3
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041dcd6
    MOV dword ptr [EDX],ECX             ; 0041dcd9
    LEA EDX,[EAX + 0x70]                ; 0041dcdb
    MOV dword ptr [EDX + 0x8],0x0       ; 0041dcde
    ADD ESP,0xc                         ; 0041dce5
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041dce8
    MOV dword ptr [EDX + 0x4],ECX       ; 0041dceb
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041dcee
    MOV dword ptr [EDX],ECX             ; 0041dcf1
    MOV dword ptr [EAX + 0x254],0x0     ; 0041dcf3
    RET                                 ; 0041dcfd

