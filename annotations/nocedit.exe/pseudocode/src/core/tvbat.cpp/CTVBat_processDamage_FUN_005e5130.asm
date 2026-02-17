; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_processDamage_FUN_005e5130(CTVBat *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e5130
        ;   Label: core_tvbat.cpp_CTVBat_processDamage_FUN_005e5130
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e5131
    MOV EAX,dword ptr [ESP + 0xc]       ; 005e5135
    FLD float ptr [EAX + 0x4]           ; 005e5139
    FSUBR float ptr [EBX + 0x243c]      ; 005e513c
    FST float ptr [EBX + 0x243c]        ; 005e5142
    FLDZ                                ; 005e5148
    FCOMPP                              ; 005e514a
    FNSTSW AX                           ; 005e514c
    SAHF                                ; 005e514e
    JNC 0x005e5161                      ; 005e514f
        ;   XREF to: 005e5161 (CONDITIONAL_JUMP)  ; LAB_005e5161
    MOV ECX,dword ptr [ESP + 0xc]       ; 005e5151
    PUSH ECX                            ; 005e5155
    PUSH EBX                            ; 005e5156
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 005e5157
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005e515c
    POP EBX                             ; 005e515f
    RET                                 ; 005e5160
    PUSH 0x0                            ; 005e5161
        ;   Label: LAB_005e5161
    PUSH 0xa                            ; 005e5163
    PUSH 0x0                            ; 005e5165
    LEA EAX,[EBX + 0x20]                ; 005e5167
    PUSH EAX                            ; 005e516a
    MOV EDX,dword ptr [0x0067b9a0]      ; 005e516b | g_CGoreInstance | g_CGorePtr
    PUSH EDX                            ; 005e5171 | g_CGoreInstance
    MOV dword ptr [EBX + 0x243c],0x0    ; 005e5172
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 005e517c
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005e5181
    MOV dword ptr [EBX + 0xc078],0x1    ; 005e5184
    MOV ECX,dword ptr [ESP + 0xc]       ; 005e518e
    PUSH ECX                            ; 005e5192
    PUSH EBX                            ; 005e5193
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 005e5194
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005e5199
    POP EBX                             ; 005e519c
    RET                                 ; 005e519d

