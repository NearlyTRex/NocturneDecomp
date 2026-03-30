; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_flies_cpp_CFlies_generateRandomPoint_FUN_004cc820(CFlies *this_ptr,CVector3f *out_point,CVector3f *reference_point)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
; CVector3f *      Stack[0xc]:4   reference_point
; Local Variables:
; CVector3f[2]     Stack[-0x44]:24  local_44
; CVector3f        Stack[-0x2c]:12  local_2c
; float            Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_flies.cpp_CFlies_initFly_FUN_004cc760 at 004cc797
;   core_flies.cpp_CFlies_process_FUN_004cbf00 at 004cc1fd
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc820
        ;   Label: core_flies.cpp_CFlies_generateRandomPoint_FUN_004cc820
    PUSH ESI                            ; 004cc821
    PUSH EDI                            ; 004cc822
    PUSH EBP                            ; 004cc823
    MOV EBP,ESP                         ; 004cc824
    SUB ESP,0x6c                        ; 004cc826
    AND ESP,0xfffffff8                  ; 004cc829
    MOV EDI,dword ptr [EBP + 0x14]      ; 004cc82c
    MOV EBX,dword ptr [EBP + 0x18]      ; 004cc82f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004cc832
    PUSH 0x3f800000                     ; 004cc835
    PUSH 0x0                            ; 004cc83a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004cc83c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)

