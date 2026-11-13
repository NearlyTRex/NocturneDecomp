; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___arrfini_FUN_005c1066(void *obj_array,int obj_count,WatcomTypeInfo *type_info)
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
; XREF[37]:
;   core_armour.cpp_FUN_0040ee30 at 0040ee3c
;   core_bmppuzzl.cpp_SButtonStruct_arrdtor50Chem_FUN_00418890 at 0041889c
;   core_bmppuzzl.cpp_SButtonStruct_arrdtor50_FUN_004188b0 at 004188bc
;   core_bodypart.cpp_FUN_0041b190 at 0041b19c
;   core_boxactor.cpp_CDemonFilter_arrdtor8_FUN_00423810 at 0042381c
;   core_dcube.cpp_CVector3f_arrdtor16_FUN_004fc490 at 004fc49c
;   core_dfilter.cpp_CDemonFilter_arrdtor4_FUN_0045dfe0 at 0045dfec
;   core_dmodel.cpp_CKeyFramedModel_arrdtor256_FUN_00468990 at 0046899f
;   core_fire.cpp_CFireball_arrdtor64_FUN_004b7930 at 004b793c
;   core_fire.cpp_CFirefly_arrdtor64_FUN_004b7970 at 004b797c
;   ... and 27 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c102c
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005c1066
        ;   Label: crt_memory.c___arrfini_FUN_005c1066
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c1069
    MOV dword ptr [ESP],EAX             ; 005c106d
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c1070
    MOV dword ptr [ESP + 0x4],EAX       ; 005c1074
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c1078
    MOV dword ptr [ESP + 0x8],EAX       ; 005c107c
    MOV EAX,ESP                         ; 005c1080
    PUSH EAX                            ; 005c1082
    CALL crt_unknown.c_FUN_005c102c     ; 005c1083
        ;   XREF to: 005c102c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c102c()
    ADD ESP,0x4                         ; 005c1088
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c108b
    ADD ESP,0xc                         ; 005c108f
    RET                                 ; 005c1092

