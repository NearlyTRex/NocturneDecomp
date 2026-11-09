; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_FUN_004fab90(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   part_index
;
; XREF[8]:
;   core_passngr.cpp_FUN_0050a9b0 at 0050aa50
;   core_pryemorp.cpp_FUN_00527970 at 00527a10
;   core_spirbear.cpp_FUN_0059b2e0 at 0059b380
;   core_spireagl.cpp_FUN_00599a70 at 00599ad4
;   core_spirindi.cpp_FUN_0059a760 at 0059a800
;   core_styldemo.cpp_FUN_005a01c0 at 005a0260
;   core_styler.cpp_FUN_0059ddb0 at 0059de58
;   unkafter_darkwolf.cpp_FUN_00598e00 at 00598ea0
;
; Called Functions:
;   core_morph.cpp_FUN_004f9f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fab90
        ;   Label: core_morph.cpp_FUN_004fab90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fab91
    PUSH EDX                            ; 004fab95
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fab96
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fab9a
    SUB EAX,EDX                         ; 004faba1
    SHL EAX,0x6                         ; 004faba3
    MOV ECX,dword ptr [ESP + 0x18]      ; 004faba6
    ADD EAX,EDX                         ; 004fabaa
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fabac
    SHL EAX,0x3                         ; 004fabb0
    PUSH ECX                            ; 004fabb3
    ADD EAX,EBX                         ; 004fabb4
    PUSH EAX                            ; 004fabb6
    CALL core_morph.cpp_FUN_004f9f50    ; 004fabb7
        ;   XREF to: 004f9f50 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_004f9f50(CMorphModel * this_ptr, int part_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 004fabbc
    POP EBX                             ; 004fabbf
    RET                                 ; 004fabc0

