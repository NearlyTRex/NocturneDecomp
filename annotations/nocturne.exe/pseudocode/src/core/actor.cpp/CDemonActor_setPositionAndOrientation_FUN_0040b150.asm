; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150(CDemonActor *param_1,float *param_2,float *param_3)
;
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004246e0 at 00424700
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b150
        ;   Label: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150
    PUSH ESI                            ; 0040b151
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040b152
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040b156
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040b15a
    LEA EAX,[ECX + 0x20]                ; 0040b15e
    MOV ESI,dword ptr [EBX]             ; 0040b161
    MOV dword ptr [EAX],ESI             ; 0040b163
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040b165
    MOV dword ptr [EAX + 0x4],ESI       ; 0040b168
    MOV ESI,dword ptr [EBX + 0x8]       ; 0040b16b
    MOV dword ptr [EAX + 0x8],ESI       ; 0040b16e
    LEA EAX,[ECX + 0x30]                ; 0040b171
    CMP EAX,EDX                         ; 0040b174
    JZ 0x0040b188                       ; 0040b176
        ;   XREF to: 0040b188 (CONDITIONAL_JUMP)  ; LAB_0040b188
    MOV EBX,dword ptr [EDX]             ; 0040b178
    MOV dword ptr [EAX],EBX             ; 0040b17a
    MOV EBX,dword ptr [EDX + 0x4]       ; 0040b17c
    MOV dword ptr [EAX + 0x4],EBX       ; 0040b17f
    MOV EBX,dword ptr [EDX + 0x8]       ; 0040b182
    MOV dword ptr [EAX + 0x8],EBX       ; 0040b185
    PUSH ECX                            ; 0040b188
        ;   Label: LAB_0040b188
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 0040b189
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040b18e
    POP ESI                             ; 0040b191
    POP EBX                             ; 0040b192
    LEA EAX,[EAX]                       ; 0040b193
    LEA EDX,[EDX]                       ; 0040b199
    NOP                                 ; 0040b19f

