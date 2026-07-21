; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_memory_c___arrfini_FUN_0056494f(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[35]:
;   FUN_00423e80 at 00423e8f
;   FUN_0042cdc0 at 0042cdcc
;   FUN_0043f980 at 0043f98f
;   FUN_0048fce0 at 0048fcef
;   FUN_004cc020 at 004cc02c
;   FUN_004cc040 at 004cc04c
;   FUN_004cc060 at 004cc06c
;   FUN_0050eb00 at 0050eb0f
;   FUN_0050eb20 at 0050eb2f
;   FUN_0050eb40 at 0050eb4c
;   ... and 25 more
;
; Called Functions:
;   FUN_00564915
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
    CALL FUN_00564915                   ; 0056496c
        ;   XREF to: 00564915 (UNCONDITIONAL_CALL)  ; undefined FUN_00564915()
    ADD ESP,0x4                         ; 00564971
    MOV EAX,dword ptr [ESP + 0x10]      ; 00564974
    ADD ESP,0xc                         ; 00564978
    RET                                 ; 0056497b

