; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_004969a0(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0049d120 at 0049d15f
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810
;   core_dirmat.cpp_FUN_004496e0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004969a0
        ;   Label: core_fire.cpp_CMuzzleFlash_init_FUN_004969a0
    PUSH ESI                            ; 004969a1
    PUSH EDI                            ; 004969a2
    PUSH EBP                            ; 004969a3
    SUB ESP,0x18                        ; 004969a4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004969a7
    MOV ESI,dword ptr [ESP + 0x30]      ; 004969ab
    PUSH ESI                            ; 004969af
    LEA EBX,[EBP + 0x1c]                ; 004969b0
    PUSH EBX                            ; 004969b3
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810 ; 004969b4
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004969b9
    PUSH 0x41000000                     ; 004969bc
    MOV dword ptr [EBX + 0x3c],0x8000   ; 004969c1
    PUSH EBX                            ; 004969c8
    MOV byte ptr [EBX + 0x1c],0x20      ; 004969c9
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860 ; 004969cd
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004969d2
    PUSH EBX                            ; 004969d5
    MOV EDX,dword ptr [0x0061b5a8]      ; 004969d6 | g_CDemonSetPtr
    PUSH EDX                            ; 004969dc | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x20],0x0      ; 004969dd
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0 ; 004969e4
        ;   XREF to: 005306b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(CDemonSet * this_ptr, CDemonGlobe * globe)
    LEA EAX,[EBP + 0x4]                 ; 004969e9
    ADD ESP,0x8                         ; 004969ec
    CMP EAX,ESI                         ; 004969ef
    JZ 0x00496a03                       ; 004969f1
        ;   XREF to: 00496a03 (CONDITIONAL_JUMP)  ; LAB_00496a03
    MOV EDX,dword ptr [ESI]             ; 004969f3
    MOV dword ptr [EAX],EDX             ; 004969f5
    MOV EDX,dword ptr [ESI + 0x4]       ; 004969f7
    MOV dword ptr [EAX + 0x4],EDX       ; 004969fa
    MOV EDX,dword ptr [ESI + 0x8]       ; 004969fd
    MOV dword ptr [EAX + 0x8],EDX       ; 00496a00
    MOV ECX,dword ptr [ESP + 0x34]      ; 00496a03
        ;   Label: LAB_00496a03
    MOV ESI,ESP                         ; 00496a07
    PUSH ECX                            ; 00496a09
    LEA EDI,[ESP + 0x10]                ; 00496a0a
    LEA EBX,[EBP + 0x10]                ; 00496a0e
    CALL core_dirmat.cpp_FUN_004496e0   ; 00496a11
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004496e0()
    LEA ESI,[ESP + 0x4]                 ; 00496a16
    ADD ESP,0x4                         ; 00496a1a
    LEA EAX,[ESP + 0xc]                 ; 00496a1d
    MOVSD ES:EDI,ESI                    ; 00496a21
    MOVSD ES:EDI,ESI                    ; 00496a22
    MOVSD ES:EDI,ESI                    ; 00496a23
    CMP EBX,EAX                         ; 00496a24
    JNZ 0x00496a37                      ; 00496a26
        ;   XREF to: 00496a37 (CONDITIONAL_JUMP)  ; LAB_00496a37
    MOV dword ptr [EBP],0x2             ; 00496a28
    ADD ESP,0x18                        ; 00496a2f
    POP EBP                             ; 00496a32
    POP EDI                             ; 00496a33
    POP ESI                             ; 00496a34
    POP EBX                             ; 00496a35
    RET                                 ; 00496a36
    MOV EAX,dword ptr [ESP + 0xc]       ; 00496a37
        ;   Label: LAB_00496a37
    MOV dword ptr [EBX],EAX             ; 00496a3b
    MOV EAX,dword ptr [ESP + 0x10]      ; 00496a3d
    MOV dword ptr [EBX + 0x4],EAX       ; 00496a41
    MOV EAX,dword ptr [ESP + 0x14]      ; 00496a44
    MOV dword ptr [EBX + 0x8],EAX       ; 00496a48
    MOV dword ptr [EBP],0x2             ; 00496a4b
    ADD ESP,0x18                        ; 00496a52
    POP EBP                             ; 00496a55
    POP EDI                             ; 00496a56
    POP ESI                             ; 00496a57
    POP EBX                             ; 00496a58
    RET                                 ; 00496a59

