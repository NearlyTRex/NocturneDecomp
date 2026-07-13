; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl __mtinitlocks(void)
;
;
; XREF[1]:
;   __mtinit at 10007701
;
; Referenced Globals:
;   void* PTR_DAT_10016c7c = 10240630
;   void* PTR_DAT_10016c9c = 10240660
;   void* PTR_DAT_10016cac = 10240678
;   void* PTR_DAT_10016cbc = 10240648
;   undefined4 DAT_10240630
;   undefined4 DAT_10240648
;   undefined4 DAT_10240660
;   undefined4 DAT_10240678
;   void* PTR_InitializeCriticalSection_102421b0 = 00242398
;
; Called Functions:
;   InitializeCriticalSection
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005900
        ;   Label: __mtinitlocks
    MOV EAX,[0x10016cbc]                ; 10005901 | PTR_DAT_10016cbc
    PUSH EAX                            ; 10005906 | DAT_10240648
    MOV ESI,dword ptr [0x102421b0]      ; 10005907 | PTR_InitializeCriticalSection_102421b0
    CALL ESI                            ; 1000590d | void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    MOV ECX,dword ptr [0x10016cac]      ; 1000590f | PTR_DAT_10016cac
    PUSH ECX                            ; 10005915 | DAT_10240678
    CALL ESI                            ; 10005916 | void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    MOV EAX,[0x10016c9c]                ; 10005918 | PTR_DAT_10016c9c
    PUSH EAX                            ; 1000591d | DAT_10240660
    CALL ESI                            ; 1000591e | void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    MOV EAX,[0x10016c7c]                ; 10005920 | PTR_DAT_10016c7c
    PUSH EAX                            ; 10005925 | DAT_10240630
    CALL ESI                            ; 10005926 | void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    POP ESI                             ; 10005928
    RET                                 ; 10005929

