; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___arrfini_FUN_0056494f(void *obj_array,int obj_count,WatcomTypeInfo *type_info)
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
; XREF[81]:
;   core_actor.cpp_FUN_0040e300 at 0040e30c
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 at 0040fe5c
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 at 0040fe1c
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30 at 0040fe3c
;   core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_00418130 at 0041813c
;   core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_00418110 at 0041811c
;   core_boneguy.cpp_SBoneGuyBox_arrdtor_FUN_0041a4f0 at 0041a4fc
;   core_box.cpp_SScrape_arrdtor_FUN_0041cbe0 at 0041cbec
;   core_boxactor.cpp_FUN_0041fb00 at 0041fb0c
;   core_bugs.cpp_FUN_00423e80 at 00423e8f
;   ... and 71 more
;
; Called Functions:
;   crt_unknown.c___arrdtor_FUN_00564915
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0056494f
        ;   Label: crt_memory.c___arrfini_FUN_0056494f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00564952
    MOV dword ptr [ESP],EAX             ; 00564956
    MOV EAX,dword ptr [ESP + 0x18]      ; 00564959
    MOV dword ptr [ESP + 0x4],EAX       ; 0056495d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00564961
    MOV dword ptr [ESP + 0x8],EAX       ; 00564965
    MOV EAX,ESP                         ; 00564969
    PUSH EAX                            ; 0056496b
    CALL crt_unknown.c___arrdtor_FUN_00564915 ; 0056496c
        ;   XREF to: 00564915 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c___arrdtor_FUN_00564915(WatcomTypeArrayInfo * destroy_info)
    ADD ESP,0x4                         ; 00564971
    MOV EAX,dword ptr [ESP + 0x10]      ; 00564974
    ADD ESP,0xc                         ; 00564978
    RET                                 ; 0056497b

