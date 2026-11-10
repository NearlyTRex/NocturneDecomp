; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_add_FUN_00482070(CStrList *this_ptr,char *string_data)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   string_data
;
; XREF[18]:
;   core_fldnotes.cpp_FUN_004aa810 at 004ab6d8
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b890b
;   core_menu.cpp_FUN_004e94f0 at 004e9c36
;   core_menu.cpp_FUN_004eae80 at 004ebd2a
;   core_mission.cpp_FUN_004f7a20 at 004f7a5d
;   core_script.cpp_CScript_startDialogLine_FUN_00530150 at 0053021c
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052bd52
;   core_script.cpp_FUN_00529410 at 00529520
;   core_sound.cpp_CSound_selectReverbPreset_FUN_00560c90 at 00560cb3
;   engine_pod.cpp_FUN_00513d1e at 00513f20
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482070
        ;   Label: shape_edittool.cpp_CStrList_add_FUN_00482070
    MOV EDX,dword ptr [ESP + 0x8]       ; 00482071
    MOV ECX,dword ptr [ESP + 0xc]       ; 00482075
    PUSH ECX                            ; 00482079
    MOV EBX,dword ptr [EDX]             ; 0048207a
    PUSH EBX                            ; 0048207c
    MOV EAX,dword ptr [EDX + 0xc]       ; 0048207d
    PUSH EDX                            ; 00482080
    CALL dword ptr [EAX + 0xc]          ; 00482081
    ADD ESP,0xc                         ; 00482084
    POP EBX                             ; 00482087
    RET                                 ; 00482088

