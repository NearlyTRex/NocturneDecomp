; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005701c0(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_svetlana.cpp_factoryFuncSvetlana_FUN_00570190 at 005701a3
;
; Called Functions:
;   core_hero.cpp_FUN_004ce240
;   core_necklace.cpp_FUN_005adda0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005701c0
        ;   Label: core_svetlana.cpp_CSvetlana_ctor_FUN_005701c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005701c1
    PUSH EBX                            ; 005701c5
    CALL core_hero.cpp_FUN_004ce240     ; 005701c6
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce240()
    ADD ESP,0x4                         ; 005701cb
    ADD EAX,0x25648                     ; 005701ce
    PUSH EAX                            ; 005701d3
    CALL core_necklace.cpp_FUN_005adda0 ; 005701d4
        ;   XREF to: 005adda0 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005adda0()
    ADD ESP,0x4                         ; 005701d9
    ADD EAX,0x3ab30                     ; 005701dc
    PUSH EAX                            ; 005701e1
    CALL core_necklace.cpp_FUN_005adda0 ; 005701e2
        ;   XREF to: 005adda0 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005adda0()
    ADD ESP,0x4                         ; 005701e7
    LEA EBX,[EAX + 0xfff9fe88]          ; 005701ea
    PUSH 0x5ec175                       ; 005701f0
    MOV dword ptr [EBX + 0x2b0],0x5fc584 ; 005701f5
    LEA EAX,[EBX + 0x2b4]               ; 005701ff
    MOV dword ptr [EBX + 0x25640],0x0   ; 00570205
    PUSH EAX                            ; 0057020f
    MOV dword ptr [EBX + 0x25644],0x0   ; 00570210
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0057021a
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x9acac]             ; 0057021f
    MOV dword ptr [EBX + 0x9acb8],0x3f800000 ; 00570225
    MOV dword ptr [EAX + 0x8],0x0       ; 0057022f
    ADD ESP,0x8                         ; 00570236
    MOV EDX,dword ptr [EAX + 0x8]       ; 00570239
    MOV dword ptr [EAX + 0x4],EDX       ; 0057023c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057023f
    MOV dword ptr [EAX],EDX             ; 00570242
    MOV EAX,EBX                         ; 00570244
    POP EBX                             ; 00570246
    RET                                 ; 00570247

