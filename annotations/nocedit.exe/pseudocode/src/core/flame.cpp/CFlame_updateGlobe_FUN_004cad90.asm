; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_updateGlobe_FUN_004cad90(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; CVector3f        Stack[-0x28]:12  local_28
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_flame.cpp_CFlame_processInEditor_FUN_004caf60 at 004cb08a
;   core_flame.cpp_CFlame_process_FUN_004c9c00 at 004c9d67
;
; Referenced Globals:
;   double DOUBLE_0062a1be = 0.5
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00471310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cad90
        ;   Label: core_flame.cpp_CFlame_updateGlobe_FUN_004cad90
    PUSH ESI                            ; 004cad91
    PUSH EBP                            ; 004cad92
    MOV EBP,ESP                         ; 004cad93
    SUB ESP,0x18                        ; 004cad95
    AND ESP,0xfffffff8                  ; 004cad98
    MOV EBX,dword ptr [EBP + 0x10]      ; 004cad9b
    LEA EDX,[EBX + 0x20]                ; 004cad9e
    MOV EAX,dword ptr [EDX]             ; 004cada1
    MOV dword ptr [ESP],EAX             ; 004cada3
    LEA EAX,[EDX + 0x4]                 ; 004cada6
    MOV EAX,dword ptr [EAX]             ; 004cada9
    MOV dword ptr [ESP + 0x4],EAX       ; 004cadab
    LEA EAX,[EDX + 0x8]                 ; 004cadaf
    MOV EAX,dword ptr [EAX]             ; 004cadb2
    MOV dword ptr [ESP + 0x8],EAX       ; 004cadb4
    FLD float ptr [EBX + 0x15c]         ; 004cadb8
    FMUL double ptr [0x0062a1be]        ; 004cadbe | DOUBLE_0062a1be
    MOV EAX,ESP                         ; 004cadc4
    LEA ESI,[EBX + 0x168]               ; 004cadc6
    PUSH EAX                            ; 004cadcc
    FLD float ptr [ESP + 0x8]           ; 004cadcd
    FXCH                                ; 004cadd1
    FADD ST0,ST1                        ; 004cadd3
    PUSH ESI                            ; 004cadd5
    FSTP ST1                            ; 004cadd6
    FSTP float ptr [ESP + 0xc]          ; 004cadd8
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00471310 ; 004caddc
        ;   XREF to: 00471310 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00471310(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004cade1
    PUSH dword ptr [EBX + 0x284]        ; 004cade4
    FLD float ptr [EBX + 0x284]         ; 004cadea
    SUB ESP,0x4                         ; 004cadf0
    FCHS                                ; 004cadf3
    FSTP float ptr [ESP]                ; 004cadf5
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004cadf8
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

