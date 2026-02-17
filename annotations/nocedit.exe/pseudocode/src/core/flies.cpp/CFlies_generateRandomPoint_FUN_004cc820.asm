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
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined8       Stack[-0x80]:8  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_flies.cpp_CFlies_initFly_FUN_004cc760 at 004cc797
;   core_flies.cpp_CFlies_process_FUN_004cbf00 at 004cc1fd
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
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
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004cc83c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

