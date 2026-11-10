; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004e9020(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_haystack.cpp_factoryFuncHaystack_FUN_004e8ff0 at 004e9003
;
; Called Functions:
;   core_hero.cpp_CHero_ctor_FUN_004ea830
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9020
        ;   Label: core_haystack.cpp_CHaystack_ctor_FUN_004e9020
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e9021
    PUSH EDX                            ; 004e9025
    CALL core_hero.cpp_CHero_ctor_FUN_004ea830 ; 004e9026
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004ea830(CHero * this_ptr)
    MOV EBX,EAX                         ; 004e902b
    ADD EAX,0x158                       ; 004e902d
    ADD ESP,0x4                         ; 004e9032
    MOV dword ptr [EAX + -0x4],0x601a64 ; 004e9035
    PUSH 0x5e4409                       ; 004e903c
    MOV dword ptr [EAX + 0x1fe54],0x0   ; 004e9041
    PUSH EAX                            ; 004e904b
    MOV dword ptr [EAX + 0x1fe58],0x0   ; 004e904c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 004e9056
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1ffb4]             ; 004e905b
    MOV dword ptr [EBX + 0x1ffc0],0x3f800000 ; 004e9061
    MOV dword ptr [EAX + 0x8],0x0       ; 004e906b
    ADD ESP,0x8                         ; 004e9072
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e9075
    MOV dword ptr [EAX + 0x4],EDX       ; 004e9078
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e907b
    MOV dword ptr [EAX],EDX             ; 004e907e
    MOV EAX,EBX                         ; 004e9080
    POP EBX                             ; 004e9082
    RET                                 ; 004e9083

