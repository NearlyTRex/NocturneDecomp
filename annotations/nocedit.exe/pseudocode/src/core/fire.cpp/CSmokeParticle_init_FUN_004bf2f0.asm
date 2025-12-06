; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0(CSmokeParticle * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, int alpha_value)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   drag_factor
; CVector3f *      Stack[0x10]:4   wind_influence
; int              Stack[0x14]:4   alpha_value
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_FUN_004c76a0 at 004c77d4
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 at 004c7b6c
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf2f0
        ;   Label: core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0
    SUB ESP,0x4                         ; 004bf2f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004bf2f4
    MOV ECX,dword ptr [ESP + 0x10]      ; 004bf2f8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004bf2fc
    LEA EAX,[EBX + 0x4]                 ; 004bf300
    CMP EAX,ECX                         ; 004bf303
    JNZ 0x004bf35f                      ; 004bf305 | LAB_004bf35f
        ;   XREF to: 004bf35f (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x1c]                ; 004bf307
        ;   Label: LAB_004bf307
    TEST EDX,EDX                        ; 004bf30a
    JZ 0x004bf373                       ; 004bf30c | LAB_004bf373
        ;   XREF to: 004bf373 (CONDITIONAL_JUMP)
    CMP EAX,EDX                         ; 004bf30e
    JZ 0x004bf322                       ; 004bf310 | LAB_004bf322
        ;   XREF to: 004bf322 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 004bf312
    MOV dword ptr [EAX],ECX             ; 004bf314
    MOV ECX,dword ptr [EDX + 0x4]       ; 004bf316
    MOV dword ptr [EAX + 0x4],ECX       ; 004bf319
    MOV ECX,dword ptr [EDX + 0x8]       ; 004bf31c
    MOV dword ptr [EAX + 0x8],ECX       ; 004bf31f
    PUSH 0x3f866666                     ; 004bf322
        ;   Label: LAB_004bf322
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bf327
    MOV dword ptr [EBX + 0x18],0x0      ; 004bf32b
    PUSH 0x3f733333                     ; 004bf332
    MOV dword ptr [EBX + 0x14],EAX      ; 004bf337
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004bf33a | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    PUSH ESI                            ; 004bf35f
        ;   Label: LAB_004bf35f
    MOV ESI,dword ptr [ECX]             ; 004bf360
    MOV dword ptr [EAX],ESI             ; 004bf362
    MOV ESI,dword ptr [ECX + 0x4]       ; 004bf364
    MOV dword ptr [EAX + 0x4],ESI       ; 004bf367
    MOV ESI,dword ptr [ECX + 0x8]       ; 004bf36a
    MOV dword ptr [EAX + 0x8],ESI       ; 004bf36d
    POP ESI                             ; 004bf370
    JMP 0x004bf307                      ; 004bf371 | LAB_004bf307
        ;   XREF to: 004bf307 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x8],EDX       ; 004bf373
        ;   Label: LAB_004bf373
    MOV EDX,dword ptr [EAX + 0x8]       ; 004bf376
    MOV dword ptr [EAX + 0x4],EDX       ; 004bf379
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bf37c
    MOV dword ptr [EAX],EDX             ; 004bf37f
    JMP 0x004bf322                      ; 004bf381 | LAB_004bf322
        ;   XREF to: 004bf322 (UNCONDITIONAL_JUMP)

