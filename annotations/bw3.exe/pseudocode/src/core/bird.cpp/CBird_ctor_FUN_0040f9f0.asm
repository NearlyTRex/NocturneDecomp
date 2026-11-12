; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBird * core_bird_cpp_CBird_ctor_FUN_0040f9f0(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bird.cpp_factoryFuncBird_FUN_0040f9c0 at 0040f9d3
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_CCharacter_ctor_FUN_0042ac20
;   core_path.cpp_CPathMap_ctor_FUN_0050acc0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f9f0
        ;   Label: core_bird.cpp_CBird_ctor_FUN_0040f9f0
    SUB ESP,0x4                         ; 0040f9f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040f9f4
    PUSH EBX                            ; 0040f9f8
    CALL core_charactr.cpp_CCharacter_ctor_FUN_0042ac20 ; 0040f9f9
        ;   XREF to: 0042ac20 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_0042ac20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0040f9fe
    ADD EAX,0xcdcc                      ; 0040fa01
    PUSH EAX                            ; 0040fa06
    CALL core_path.cpp_CPathMap_ctor_FUN_0050acc0 ; 0040fa07
        ;   XREF to: 0050acc0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_0050acc0(CPathMap * this_ptr)
    LEA EBX,[EAX + 0xffff3234]          ; 0040fa0c
    MOV dword ptr [EBX + 0x154],0x5dbb14 ; 0040fa12
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 0040fa1c
    ADD ESP,0x4                         ; 0040fa26
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 0040fa29
    PUSH 0x3f8ccccd                     ; 0040fa33
    MOV dword ptr [EBX + 0x327c],0x3fcccccd ; 0040fa38
    PUSH 0x3f666666                     ; 0040fa42
    MOV dword ptr [EBX + 0x3280],0xc479c000 ; 0040fa47
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0040fa51
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0040fa56
    FLD float ptr [ESP + 0x8]           ; 0040fa5a
    ADD ESP,0x8                         ; 0040fa5e
    MOV dword ptr [EBX + 0x206b4],0x0   ; 0040fa61
    PUSH 0x5b637b                       ; 0040fa6b
    LEA EAX,[EBX + 0x158]               ; 0040fa70
    MOV dword ptr [EBX + 0x206b8],0x0   ; 0040fa76
    PUSH EAX                            ; 0040fa80
    FSTP float ptr [EBX + 0x206b0]      ; 0040fa81
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0040fa87
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x27c0],0x0    ; 0040fa8c
    ADD ESP,0x8                         ; 0040fa96
    MOV dword ptr [EBX + 0x206a8],0x0   ; 0040fa99
    MOV EAX,EBX                         ; 0040faa3
    MOV dword ptr [EBX + 0x206ac],0x0   ; 0040faa5
    ADD ESP,0x4                         ; 0040faaf
    POP EBX                             ; 0040fab2
    RET                                 ; 0040fab3

