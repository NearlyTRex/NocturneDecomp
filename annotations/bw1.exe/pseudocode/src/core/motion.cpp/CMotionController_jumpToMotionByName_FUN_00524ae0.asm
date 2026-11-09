; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0(CMotionController *this_ptr,char *motion_name,float frame_number)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; float            Stack[0xc]:4   frame_number
;
; XREF[7]:
;   core_doc.cpp_FUN_004763c0 at 0047640e
;   core_dracbrid.cpp_FUN_0047d1e0 at 0047d299
;   core_mimic.cpp_FUN_00510530 at 005105ae
;   core_moloch.cpp_FUN_005204e0 at 00520aa6
;   core_stranger.cpp_FUN_00591ce0 at 00591d2e
;   core_succubus.cpp_FUN_00592320 at 005925c7
;   core_vampboss.cpp_FUN_005a7290 at 005a72ad
;
; Called Functions:
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10
;   core_motion.cpp_FUN_005240c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524ae0
        ;   Label: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
    PUSH 0x1                            ; 00524ae1
    MOV EDX,dword ptr [ESP + 0x10]      ; 00524ae3
    MOV EAX,dword ptr [ESP + 0xc]       ; 00524ae7
    PUSH EDX                            ; 00524aeb
    MOV ECX,dword ptr [EAX]             ; 00524aec
    PUSH ECX                            ; 00524aee
    CALL core_motion.cpp_FUN_005240c0   ; 00524aef
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00524af4
    PUSH dword ptr [ESP + 0x10]         ; 00524af7
    PUSH EAX                            ; 00524afb
    MOV EBX,dword ptr [ESP + 0x10]      ; 00524afc
    PUSH EBX                            ; 00524b00
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10 ; 00524b01
        ;   XREF to: 00524b10 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00524b06
    POP EBX                             ; 00524b09
    RET                                 ; 00524b0a

