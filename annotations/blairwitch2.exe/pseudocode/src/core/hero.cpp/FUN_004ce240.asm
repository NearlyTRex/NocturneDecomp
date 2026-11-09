; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_hero_cpp_FUN_004ce240(CCharacter *param_1)
;
;
; XREF[10]:
;   core_baron.cpp_CBaron_ctor_FUN_0040f690 at 0040f698
;   core_colonel.cpp_CColonel_ctor_FUN_00435610 at 00435616
;   core_doc.cpp_CDoc_ctor_FUN_004500d0 at 004500dc
;   core_gabriela.cpp_CGabriella_ctor_FUN_004ad2c0 at 004ad2c8
;   core_haystack.cpp_CHaystack_ctor_FUN_004cc760 at 004cc766
;   core_icepick.cpp_CIcePick_ctor_FUN_004d4990 at 004d4996
;   core_moloch.cpp_CMoloch_ctor_FUN_00501340 at 00501348
;   core_scat.cpp_CScat_ctor_FUN_0051e9a0 at 0051e9a6
;   core_stranger.cpp_CStranger_ctor_FUN_005627f0 at 005627f8
;   core_svetlana.cpp_CSvetlana_ctor_FUN_005701c0 at 005701c6
;
; Called Functions:
;   core_charactr.cpp_CCharacter_ctor_FUN_00422340
;   core_hero.cpp_FUN_004cec30
;   core_inv.cpp_FUN_004da760
;   core_path.cpp_CPathMap_ctor_FUN_00511c90
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce240
        ;   Label: core_hero.cpp_FUN_004ce240
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ce241
    PUSH EBX                            ; 004ce245
    CALL core_charactr.cpp_CCharacter_ctor_FUN_00422340 ; 004ce246
        ;   XREF to: 00422340 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00422340(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004ce24b
    ADD EAX,0x10a9c                     ; 004ce24e
    PUSH EAX                            ; 004ce253
    CALL core_path.cpp_CPathMap_ctor_FUN_00511c90 ; 004ce254
        ;   XREF to: 00511c90 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_00511c90(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 004ce259
    ADD EAX,0x138e0                     ; 004ce25c
    PUSH EAX                            ; 004ce261
    CALL core_inv.cpp_FUN_004da760      ; 004ce262
        ;   XREF to: 004da760 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004da760()
    ADD ESP,0x4                         ; 004ce267
    ADD EAX,0x624                       ; 004ce26a
    PUSH EAX                            ; 004ce26f
    CALL core_inv.cpp_FUN_004da760      ; 004ce270
        ;   XREF to: 004da760 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004da760()
    ADD ESP,0x4                         ; 004ce275
    ADD EAX,0x624                       ; 004ce278
    PUSH EAX                            ; 004ce27d
    CALL core_inv.cpp_FUN_004da760      ; 004ce27e
        ;   XREF to: 004da760 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004da760()
    LEA EBX,[EAX + 0xfffdb03c]          ; 004ce283
    MOV dword ptr [EBX + 0x24380],EBX   ; 004ce289
    ADD ESP,0x4                         ; 004ce28f
    MOV dword ptr [EBX + 0x249a4],EBX   ; 004ce292
    PUSH 0x34                           ; 004ce298
    MOV dword ptr [EBX + 0x24fc8],EBX   ; 004ce29a
    PUSH 0x0                            ; 004ce2a0
    LEA EAX,[EBX + 0x10a68]             ; 004ce2a2
    MOV dword ptr [EBX + 0x2b0],0x5f8274 ; 004ce2a8
    PUSH EAX                            ; 004ce2b2
    MOV dword ptr [EBX + 0x2563c],0x0   ; 004ce2b3
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004ce2bd
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x10a60],0x0   ; 004ce2c2
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 004ce2cc
    MOV dword ptr [EBX + 0x3434],0x3f666666 ; 004ce2d6
    MOV dword ptr [EBX + 0x3438],0x49742400 ; 004ce2e0
    MOV dword ptr [EBX + 0x343c],0x49742400 ; 004ce2ea
    MOV dword ptr [EBX + 0x3440],0x3fcccccd ; 004ce2f4
    MOV dword ptr [EBX + 0x3444],0x40c00000 ; 004ce2fe
    MOV dword ptr [EBX + 0x10a64],0x2   ; 004ce308
    MOV dword ptr [EBX + 0x24378],0x0   ; 004ce312
    MOV dword ptr [EBX + 0x25604],0x0   ; 004ce31c
    MOV dword ptr [EBX + 0x25608],0x0   ; 004ce326
    MOV dword ptr [EBX + 0x2560c],0x0   ; 004ce330
    MOV dword ptr [EBX + 0x25610],0x0   ; 004ce33a
    MOV dword ptr [EBX + 0x25614],0x0   ; 004ce344
    MOV dword ptr [EBX + 0x25618],0x0   ; 004ce34e
    MOV dword ptr [EBX + 0x2561c],0x0   ; 004ce358
    ADD ESP,0xc                         ; 004ce362
    MOV dword ptr [EBX + 0x255e8],0x0   ; 004ce365
    PUSH EBX                            ; 004ce36f
    MOV dword ptr [EBX + 0x255ec],0x0   ; 004ce370
    CALL core_hero.cpp_FUN_004cec30     ; 004ce37a
        ;   XREF to: 004cec30 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cec30()
    MOV dword ptr [EBX + 0x25638],0x2   ; 004ce37f
    MOV dword ptr [EBX + 0x282c],0x0    ; 004ce389
    ADD ESP,0x4                         ; 004ce393
    MOV dword ptr [EBX + 0x25b0],0x1    ; 004ce396
    MOV EAX,EBX                         ; 004ce3a0
    MOV dword ptr [EBX + 0x259c],0x41490fdb ; 004ce3a2
    POP EBX                             ; 004ce3ac
    RET                                 ; 004ce3ad

