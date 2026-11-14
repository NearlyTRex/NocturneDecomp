; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___arrfini_FUN_005b854f(void *obj_array,int obj_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   obj_array
; int              Stack[0x8]:4   obj_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[36]:
;   core_actor.cpp_FUN_0040d400 at 0040d40c
;   core_armour.cpp_FUN_0040f2b0 at 0040f2bc
;   core_bmppuzzl.cpp_CAlphaBitmap_arrdtor4_FUN_0059bfe0 at 0059bfec
;   core_bmppuzzl.cpp_SButtonStruct_arrdtor30_FUN_0059bfc0 at 0059bfcc
;   core_bodypart.cpp_FUN_00417d10 at 00417d1c
;   core_boxactor.cpp_CDemonFilter_arrdtor8_FUN_0041d8a0 at 0041d8ac
;   core_dfilter.cpp_CDemonFilter_arrdtor4_FUN_00447e80 at 00447e8c
;   core_dmodel.cpp_CKeyFramedModel_arrdtor256_FUN_0044fdb0 at 0044fdbf
;   core_fire.cpp_CFireball_arrdtor64_FUN_0049f080 at 0049f08c
;   core_fire.cpp_CFirefly_arrdtor64_FUN_0049f0c0 at 0049f0cc
;   ... and 26 more
;
; Called Functions:
;   crt_unknown.c_FUN_005b8515
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005b854f
        ;   Label: crt_memory.c___arrfini_FUN_005b854f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b8552
    MOV dword ptr [ESP],EAX             ; 005b8556
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b8559
    MOV dword ptr [ESP + 0x4],EAX       ; 005b855d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b8561
    MOV dword ptr [ESP + 0x8],EAX       ; 005b8565
    MOV EAX,ESP                         ; 005b8569
    PUSH EAX                            ; 005b856b
    CALL crt_unknown.c_FUN_005b8515     ; 005b856c
        ;   XREF to: 005b8515 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8515()
    ADD ESP,0x4                         ; 005b8571
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b8574
    ADD ESP,0xc                         ; 005b8578
    RET                                 ; 005b857b

