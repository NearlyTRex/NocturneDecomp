; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_00538020(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[3]:
;   core_barrier.cpp_FUN_00410e60 at 00410e76
;   core_door.cpp_FUN_0045f5a0 at 0045f8a6
;   core_door.cpp_FUN_004605e0 at 0046060f
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_00476df0
;   core_path.cpp_resetAllPathMaps_FUN_00513f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538020
        ;   Label: core_setcolid.cpp_FUN_00538020
    PUSH ESI                            ; 00538021
    PUSH EDI                            ; 00538022
    SUB ESP,0x48                        ; 00538023
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00538026
    PUSH EBX                            ; 0053802a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053802b
    LEA ESI,[ESP + 0x1c]                ; 00538031
    LEA EDI,[ESP + 0x4]                 ; 00538035
    CALL dword ptr [EAX + 0x24]         ; 00538039
    MOV ECX,0x6                         ; 0053803c
    LEA ESI,[ESP + 0x1c]                ; 00538041
    ADD ESP,0x4                         ; 00538045
    MOVSD.REP ES:EDI,ESI                ; 00538048
    LEA EDX,[ESP + 0x30]                ; 0053804a
    MOV ESI,ESP                         ; 0053804e
    CMP EDX,ESI                         ; 00538050
    JNZ 0x0053809e                      ; 00538052
        ;   XREF to: 0053809e (CONDITIONAL_JUMP)  ; LAB_0053809e
    LEA EAX,[ESP + 0x3c]                ; 00538054
        ;   Label: LAB_00538054
    LEA EDX,[ESI + 0xc]                 ; 00538058
    CMP EAX,EDX                         ; 0053805b
    JZ 0x00538073                       ; 0053805d
        ;   XREF to: 00538073 (CONDITIONAL_JUMP)  ; LAB_00538073
    MOV EAX,dword ptr [EDX]             ; 0053805f
    MOV dword ptr [ESP + 0x3c],EAX      ; 00538061
    MOV EAX,dword ptr [EDX + 0x4]       ; 00538065
    MOV dword ptr [ESP + 0x40],EAX      ; 00538068
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053806c
    MOV dword ptr [ESP + 0x44],EAX      ; 0053806f
    LEA EAX,[ESP + 0x3c]                ; 00538073
        ;   Label: LAB_00538073
    PUSH EAX                            ; 00538077
    LEA EAX,[ESP + 0x34]                ; 00538078
    PUSH EAX                            ; 0053807c
    LEA EAX,[EBX + 0x30]                ; 0053807d
    PUSH EAX                            ; 00538080
    ADD EBX,0x20                        ; 00538081
    PUSH EBX                            ; 00538084
    PUSH 0x1fc9c68                      ; 00538085 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_00476df0   ; 0053808a
        ;   XREF to: 00476df0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_FUN_00476df0(CDemonRaytrace * this_ptr, CVector3f * offset, CVector3f * rotation, CVector3f * extent, ...)
    ADD ESP,0x14                        ; 0053808f
    CALL core_path.cpp_resetAllPathMaps_FUN_00513f30 ; 00538092
        ;   XREF to: 00513f30 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_00513f30()
    ADD ESP,0x48                        ; 00538097
    POP EDI                             ; 0053809a
    POP ESI                             ; 0053809b
    POP EBX                             ; 0053809c
    RET                                 ; 0053809d
    MOV EAX,dword ptr [ESP]             ; 0053809e
        ;   Label: LAB_0053809e
    MOV dword ptr [ESP + 0x30],EAX      ; 005380a1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005380a5
    MOV dword ptr [ESP + 0x34],EAX      ; 005380a9
    MOV EAX,dword ptr [ESP + 0x8]       ; 005380ad
    MOV dword ptr [ESP + 0x38],EAX      ; 005380b1
    JMP 0x00538054                      ; 005380b5
        ;   XREF to: 00538054 (UNCONDITIONAL_JUMP)  ; LAB_00538054

