; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004a7e80(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; double           Stack[-0x3c]:8  dStack_3c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_summonFireEmitters_FUN_005e7410 at 005e7463
;
; Referenced Globals:
;   float FLOAT_0062407e = 5
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_hero.cpp_closestHeroToPoint_FUN_004f2170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7e80
        ;   Label: core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004a7e80
    PUSH EBP                            ; 004a7e81
    MOV EBP,ESP                         ; 004a7e82
    SUB ESP,0x64                        ; 004a7e84
    AND ESP,0xfffffff8                  ; 004a7e87
    MOV EBX,dword ptr [EBP + 0xc]       ; 004a7e8a
    ADD EBX,0x20                        ; 004a7e8d
    PUSH EBX                            ; 004a7e90
    CALL core_hero.cpp_closestHeroToPoint_FUN_004f2170 ; 004a7e91
        ;   XREF to: 004f2170 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_closestHeroToPoint_FUN_004f2170(CLocation * location)
    FLD float ptr [EAX + 0x20]          ; 004a7e96
    FSUB float ptr [EBX]                ; 004a7e99
    ADD ESP,0x4                         ; 004a7e9b
    FSTP float ptr [ESP + 0x10]         ; 004a7e9e
    FLD float ptr [EAX + 0x24]          ; 004a7ea2
    FSUB float ptr [EBX + 0x4]          ; 004a7ea5
    FSTP float ptr [ESP + 0x14]         ; 004a7ea8
    FLD float ptr [EAX + 0x28]          ; 004a7eac
    LEA EAX,[ESP + 0x4]                 ; 004a7eaf
    FSUB float ptr [EBX + 0x8]          ; 004a7eb3
    LEA EBX,[ESP + 0x10]                ; 004a7eb6
    FSTP float ptr [ESP + 0x18]         ; 004a7eba
    CMP EAX,EBX                         ; 004a7ebe
    JZ 0x004a7eda                       ; 004a7ec0
        ;   XREF to: 004a7eda (CONDITIONAL_JUMP)  ; LAB_004a7eda
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a7ec2
    MOV dword ptr [ESP + 0x4],EAX       ; 004a7ec6
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a7eca
    MOV dword ptr [ESP + 0x8],EAX       ; 004a7ece
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a7ed2
    MOV dword ptr [ESP + 0xc],EAX       ; 004a7ed6
    FLD float ptr [ESP + 0x8]           ; 004a7eda
        ;   Label: LAB_004a7eda
    PUSH 0x41000000                     ; 004a7ede
    FADD float ptr [0x0062407e]         ; 004a7ee3 | FLOAT_0062407e
    PUSH 0xc1000000                     ; 004a7ee9
    FSTP float ptr [ESP + 0x10]         ; 004a7eee
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a7ef2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

